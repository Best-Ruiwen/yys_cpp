#include "inc/baigui.h"
#include "inc/ui_baigui.h"
#include "inc/function.h"
#include <thread>

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
    x = ui->xsize->text().toInt(&ok);
    y = ui->ysize->text().toInt(&ok);
    times = ui->times->text().toInt(&ok);
    shutdown = ui->checkBox->isChecked();
    std::thread game(start_baigui, x, y, shutdown, times);
    game.detach();
}
