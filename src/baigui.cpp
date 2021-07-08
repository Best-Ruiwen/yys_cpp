#include "inc/baigui.h"
#include "inc/ui_baigui.h"
#include "inc/function.h"
#include <thread>
#include <Windows.h>

baigui::baigui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::baigui)
{
    ui->setupUi(this);
}

baigui::~baigui()
{
    delete ui;
}

void baigui::on_pushButton_clicked()
{
    int x, y, times;
    bool ok, shutdown;

    HWND lhwnd = FindWindow(NULL, TEXT("阴阳师-网易游戏"));
    RECT rctA;
    GetWindowRect(lhwnd, &rctA);

    x = rctA.right - rctA.left - 10;
    y = rctA.bottom - rctA.top - 10;
    times = ui->times->text().toInt(&ok);
    shutdown = ui->checkBox->isChecked();
    std::thread game(start_baigui, x, y, shutdown, times);
    game.detach();
}
