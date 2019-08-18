#include "inc/yuhun.h"
#include "inc/ui_yuhun.h"
#include "inc/function.h"
#include <thread>
#include <QDebug>

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

    time = ui->time->text().toInt(&ok);
    x = ui->xsize->text().toInt(&ok);
    y = ui->ysize->text().toInt(&ok);
    times = ui->time->text().toInt(&ok);
    const bool a = ui->checkBox->isChecked();
    const bool b = ui->checkBox_2->isChecked();
    const bool c = ui->checkBox_3->isChecked();

    std::thread game(start_game, time, x, y, times, a, b, c);

    game.detach();
}
