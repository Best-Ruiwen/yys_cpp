#include "inc/mainwindow.h"
#include "inc/ui_mainwindow.h"
#include "inc/function.h"
#include <thread>
#include "inc/baigui.h"
#include "inc/yuhun.h"
//#include "QStackedWidget"

#define debug
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pStack = new QStackedWidget(this);
    baigui *page_baigui = new baigui(this);
    yuhun *page_yuhun = new yuhun(this);

    pStack->addWidget(page_yuhun);
    pStack->addWidget(page_baigui);

    pStack->move(10, 40);
    pStack->resize(800, 400);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::switchPage()
{
    int count = pStack->count();
    int index = pStack->currentIndex();
    if(++index >= count) index = 0;
    pStack->setCurrentIndex(index);
}

void MainWindow::on_pushButton_baigui_clicked()
{
    pStack->setCurrentIndex(1);
}

void MainWindow::on_pushButton_yuhun_clicked()
{
    pStack->setCurrentIndex(0);
}
