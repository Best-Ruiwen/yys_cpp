#ifndef YUHUN_H
#define YUHUN_H

#include <QWidget>

namespace Ui {
class yuhun;
}

class yuhun : public QWidget
{
    Q_OBJECT

public:
    explicit yuhun(QWidget *parent = 0);
    ~yuhun();

private slots:
    void on_pushButton_clicked();

private:
    Ui::yuhun *ui;
};

#endif // YUHUN_H
