#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void switchPage();

private slots:

    void on_pushButton_baigui_clicked();

    void on_pushButton_yuhun_clicked();

private:
    Ui::MainWindow *ui;
    QStackedWidget *pStack;
};

#endif // MAINWINDOW_H
