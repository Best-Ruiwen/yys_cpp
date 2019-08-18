#ifndef BAIGUI_H
#define BAIGUI_H

#include <QWidget>

namespace Ui {
class baigui;
}

class baigui : public QWidget
{
    Q_OBJECT

public:
    explicit baigui(QWidget *parent = 0);
    ~baigui();

private slots:
    void on_pushButton_clicked();

private:
    Ui::baigui *ui;
};

#endif // BAIGUI_H
