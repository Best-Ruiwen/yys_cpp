#include "inc/function.h"
#include <windows.h>
#include <winuser.h>
#include <stdlib.h>
#include "inc/random.h"
#include <time.h>
#include <math.h>
#include <qdebug.h>
#define V2

void sleep(double t){
    Sleep(t * 1000);
}

void move_cur(int x, int y){
    SetCursorPos(x, y);
}

void get_cur_pos(int *x, int *y){
    POINT p;
    GetCursorPos(&p);
    *x = p.x;
    *y = p.y;
}

void click_left(void){
    int x, y;
    get_cur_pos(&x, &y);
    mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}

void move_cur_random_line(void){
    int x, y;
    for (int i=0;i<randint(250, 300);i++){
        get_cur_pos(&x, &y);
        int flag = randint(0, 100);
        if (flag < 33)
            move_cur(x + randint(0, 5), y + randint(0, 5));
        else if (flag < 66)
            move_cur(x + randint(0, 5), y - randint(0, 2));
        else
            move_cur(x + randint(0, 2), y + randint(0, 3));
        Sleep(randint(5, 10));
    }
    click_left();
}

void move_cur_line(int terminal_x, int terminal_y){
    int movement_x, movement_y, x, y;
    int current_x, current_y;
    // 移动Y轴
#ifdef V2
    get_cur_pos(&current_x, &current_y);
    movement_y = current_y - terminal_y;
    for (int i=0; i<(int)(abs(movement_y)/3);i++){
        get_cur_pos(&x, &y);
        int back_flag = randint(0, 100);
        if (back_flag < 50)
            if (movement_y > 0)
                move_cur(x - 1, y - 3); //向上移动
            else if (movement_y < 0)
                move_cur(x - 1, y + 3); //向下移动
            else
                break;

        else
            if (movement_y > 0)
                move_cur(x + 1, y - 3);
            else if (movement_y < 0)
                move_cur(x + 1, y + 3);
            else
                break;

        Sleep(randint(5, 10));
    }


    //移动X轴
    get_cur_pos(&current_x, &current_y);
    movement_x = current_x - terminal_x;
    for (int i=0; i<(int)(abs(movement_x)/3);i++){
        get_cur_pos(&x, &y);
        int back_flag = randint(0, 100);
        if (back_flag < 50)
            if (movement_x > 0)
                move_cur(x - 3, y + 1); //向左移动
            else if (movement_x < 0)
                move_cur(x + 3, y + 1); //向右移动
            else
                break;

        else
            if (movement_x > 0)
                move_cur(x - 3, y - 1);
            else if (movement_x < 0)
                move_cur(x + 3, y - 1);
            else
                break;

        Sleep(randint(5, 10));
    }
#else
    get_cur_pos(&movement_x, &movement_y);
    for (int i=0; i<(int)((movement_y - terminal_y)/3);i++){
        get_cur_pos(&x, &y);
        int back_flag = randint(0, 100);
        if (back_flag < 50)
            move_cur(x - 1, y - 3);
        else
            move_cur(x + 1, y - 3);
        Sleep(randint(10, 20));
    }

    get_cur_pos(&movement_x, &movement_y);
    for (int i=0; i<(int)((movement_x - terminal_x)/3);i++){
        get_cur_pos(&x, &y);
        int back_flag = randint(0, 100);
        if (back_flag < 50)
            move_cur(x - 3, y - 1);
        else
            move_cur(x - 3, y + 1);
        Sleep(randint(10, 20));
    }
#endif
}

void start_game(int t , int x, int y, int total_times, bool shutdown, bool chounv, bool huntu){ //参数0是关机， 参数1是丑女，参数2是魂土
    sleep(5);
    //qDebug() << shutdown << ", " << total_times;
    //qDebug() << params[0] << params[1] << params[2];
    srand(time(NULL));
    int x_temp = (int) (x*0.70);
    int y_temp = (int) (y*0.70);
    int x_init, y_init;
    int times = 0;

    while (times < total_times){
        x_init = randint(x_temp, x_temp + (int) (x*0.08));
        y_init = randint(y_temp, y_temp + (int) (y*0.048));
        //move_cur_line(x_init, y_init);
        int count_init = 0, ix, iy;
        get_cur_pos(&ix, &iy);
        while (ix != x_init || iy != y_init){
            move_cur_line(x_init, y_init);
            count_init += 1;
            if (count_init >= 10){
                move_cur(x_init, y_init);
                break;
            }
        }

        click_left();
        Sleep(randint(200, 300));

        if (chounv){
            move_cur_line((int)(x/2), (int)(y*0.3));
            sleep(3);
            click_left();
            sleep(10);

            //第二层
            click_left();
            for(int j=0;j<5;j++){
                Sleep(randint(100,120));
                click_left();
            }
            if (huntu) sleep(12);
            else sleep(9);
            //第三层
            click_left();
            for(int j=0;j<5;j++){
                Sleep(randint(100,120));
                click_left();
            }
            move_cur_line(x_init, y_init);
            if (huntu) sleep(22);
            else sleep(13);
        }
        else{
            //将鼠标移动到随机位置
            move_cur_random_line();

            //将鼠标移动回初始位置
            //qDebug() << x_init << y_init;
            move_cur_line(x_init, y_init);

            click_left();

            if (t == 1)
                sleep(uniform(9, 10));
            else
                Sleep(1000*uniform(t+4, t+6));
        }
        click_left();
        Sleep(randint(2200, 2500));
        click_left();
        Sleep(randint(2200, 2500));
        click_left();
        Sleep(randint(2200, 2500));
        times ++;

        //qDebug() << times;
    }
    if (shutdown)
        system("shutdown -s -t 60");
    else
        exit(0);
}

void start_baigui(int x, int y, bool shutdown, int total_times){
    sleep(5);
    int x_temp = (int) (x*0.7);
    int y_temp = (int) (y*0.73);
    int times = 0, x1, y1;
    while(times <= total_times){
        int x_init = randint(x_temp, x_temp + (int)(x * 0.08));
        int y_init = randint(y_temp, y_temp + (int)(y * 0.048));
        int count_init = 0, ix, iy;

        get_cur_pos(&ix, &iy);
        while (ix != x_init || iy != y_init){
            move_cur_line(x_init, y_init);
            count_init += 1;
            if (count_init >= 10){
                move_cur(x_init, y_init);
                break;
            }
        }

        click_left();
        Sleep(randint(2200, 2500));

        //选鬼王

        y1 = randint((int)(y * 0.6), (int)(y * 0.6) + (int)(y * 0.1));
        int flag = randint(0, 100);
        if (flag < 33){
            x1 = randint((int)(x * 0.22), (int)(x * 0.22) + (int)(x * 0.03));
            move_cur_line(x1, y1);
        }
        else if (flag < 66){
            int x1 = randint((int)(x * 0.49), (int)(x * 0.49) + (int)(x * 0.03));
            move_cur_line(x1, y1);
        }
        else {
            int x1 = randint((int)(x * 0.76), (int)(x * 0.76) + (int)(x * 0.03));
            move_cur_line(x1, y1);
        }
        click_left();

        //鼠标移动到开始位置
        x1 = randint((int)(x * 0.9), (int)(x * 0.9) + (int)(x * 0.05));
        y1 = randint((int)(y * 0.82), (int)(y * 0.82) + (int)(y * 0.09));
        move_cur_line(x1, y1);
        click_left();
        sleep(1);

        //把豆子数量调整到最大
        get_cur_pos(&x1, &y1);
        while (abs(x1 - (int) (x*0.3)) > 2 || abs(y1 -(int) (y*0.93)) > 2){
            move_cur_line((int)(x*0.3), (int)(y*0.93));
            get_cur_pos(&x1, &y1);
        }
        mouse_event(MOUSEEVENTF_LEFTDOWN, x1, y1, 0, 0);
        move_cur_line((int)(x * 0.45), (int)(y * 0.93));
        mouse_event(MOUSEEVENTF_LEFTUP, x1, y1, 0, 0);
        Sleep(randint(30, 50));

        //开始砸豆子
        int count = 0;
        y1 = randint((int)(y * 0.63), (int)(y * 0.63) + (int)(y * 0.05));
        while (count < 35){
            x1 = randint((int)(x * 0.3), (int)(x * 0.4) + (int)(x * 0.4));
            move_cur_line(x1, y1);
            Sleep(randint(600, 700));

            click_left();
            sleep(0.1);
            count += 1;
        }

        y1 = randint((int)(y * 0.93), (int)(y * 0.91) + (int)(y * 0.07));
        qDebug() << y1;
        move_cur_line((int)(x*0.1), y1);
        click_left();
        sleep(3);
    }


    if (shutdown)
        system("shutdown -s -t 60");
    else
        exit(0);
}
