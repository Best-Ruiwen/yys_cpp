/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_yuhun;
    QPushButton *pushButton_baigui;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(338, 222);
        MainWindow->setStyleSheet(QLatin1String("#centralWidget{border-image: url(:/root/bg.png);}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_yuhun = new QPushButton(centralWidget);
        pushButton_yuhun->setObjectName(QStringLiteral("pushButton_yuhun"));
        pushButton_yuhun->setGeometry(QRect(80, 10, 81, 31));
        QFont font;
        font.setPointSize(14);
        pushButton_yuhun->setFont(font);
        pushButton_yuhun->setFlat(true);
        pushButton_baigui = new QPushButton(centralWidget);
        pushButton_baigui->setObjectName(QStringLiteral("pushButton_baigui"));
        pushButton_baigui->setGeometry(QRect(160, 10, 91, 31));
        pushButton_baigui->setFont(font);
        pushButton_baigui->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_yuhun->setText(QApplication::translate("MainWindow", "\345\276\241\351\255\202\347\261\273", 0));
        pushButton_baigui->setText(QApplication::translate("MainWindow", "\347\231\276\351\254\274", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
