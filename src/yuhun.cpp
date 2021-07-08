#include "inc/yuhun.h"
#include "inc/ui_yuhun.h"
#include "inc/function.h"
#include <thread>
#include <QDebug>
#include <Windows.h>

yuhun::yuhun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::yuhun)
{
    ui->setupUi(this);
}

yuhun::~yuhun()
{
    delete ui;
}

void yuhun::on_pushButton_clicked()
{
    int time, x, y, times;
    bool ok;

    HWND lhwnd = FindWindow(NULL, TEXT("阴阳师-网易游戏"));
    RECT rctA;
    GetWindowRect(lhwnd, &rctA);
//    qDebug() << rctA.right - rctA.left << ", " << rctA.bottom - rctA.top;


    time = ui->time->text().toInt(&ok);
//    x = ui->xsize->text().toInt(&ok);
//    y = ui->ysize->text().toInt(&ok);
    x = rctA.right - rctA.left - 10;
    y = rctA.bottom - rctA.top - 10;
    times = ui->times->text().toInt(&ok);
    const bool isShutdown = ui->checkBox->isChecked();

    std::thread game(start_game, time, x, y, times, isShutdown);

    game.detach();
}

void yuhun::on_checkBox_clicked()
{

}
