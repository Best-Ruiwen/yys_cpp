/********************************************************************************
** Form generated from reading UI file 'yuhun.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YUHUN_H
#define UI_YUHUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yuhun
{
public:
    QLineEdit *ysize;
    QLabel *label_2;
    QLabel *label_4;
    QCheckBox *checkBox;
    QLineEdit *times;
    QLineEdit *time;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *xsize;
    QLabel *label_3;
    QCheckBox *checkBox_2;
    QLabel *label_5;
    QCheckBox *checkBox_3;

    void setupUi(QWidget *yuhun)
    {
        if (yuhun->objectName().isEmpty())
            yuhun->setObjectName(QStringLiteral("yuhun"));
        yuhun->resize(338, 182);
        ysize = new QLineEdit(yuhun);
        ysize->setObjectName(QStringLiteral("ysize"));
        ysize->setGeometry(QRect(150, 30, 31, 21));
        label_2 = new QLabel(yuhun);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 30, 16, 21));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"Adobe Devanagari\";"));
        label_4 = new QLabel(yuhun);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 81, 21));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"Adobe Devanagari\";"));
        checkBox = new QCheckBox(yuhun);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(200, 80, 91, 31));
        QFont font;
        font.setPointSize(12);
        checkBox->setFont(font);
        times = new QLineEdit(yuhun);
        times->setObjectName(QStringLiteral("times"));
        times->setGeometry(QRect(90, 130, 91, 20));
        time = new QLineEdit(yuhun);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(90, 80, 91, 21));
        pushButton = new QPushButton(yuhun);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 120, 81, 31));
        label = new QLabel(yuhun);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 81, 21));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Adobe Devanagari\";"));
        xsize = new QLineEdit(yuhun);
        xsize->setObjectName(QStringLiteral("xsize"));
        xsize->setGeometry(QRect(90, 30, 31, 21));
        label_3 = new QLabel(yuhun);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 81, 21));
        label_3->setStyleSheet(QStringLiteral("font: 12pt \"Adobe Devanagari\";"));
        checkBox_2 = new QCheckBox(yuhun);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(200, 30, 71, 16));
        checkBox_2->setFont(font);
        label_5 = new QLabel(yuhun);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 160, 101, 20));
        checkBox_3 = new QCheckBox(yuhun);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(200, 60, 71, 16));
        checkBox_3->setFont(font);

        retranslateUi(yuhun);

        QMetaObject::connectSlotsByName(yuhun);
    } // setupUi

    void retranslateUi(QWidget *yuhun)
    {
        yuhun->setWindowTitle(QApplication::translate("yuhun", "Form", 0));
        label_2->setText(QApplication::translate("yuhun", "X", 0));
        label_4->setText(QApplication::translate("yuhun", "\345\276\205\345\210\267\346\254\241\346\225\260\357\274\232", 0));
        checkBox->setText(QApplication::translate("yuhun", "\345\210\267\345\256\214\345\205\263\346\234\272", 0));
        times->setText(QApplication::translate("yuhun", "100", 0));
        pushButton->setText(QApplication::translate("yuhun", "\345\274\200\345\247\213", 0));
        label->setText(QApplication::translate("yuhun", "\347\252\227\345\217\243\345\244\247\345\260\217\357\274\232", 0));
        label_3->setText(QApplication::translate("yuhun", "\344\270\200\346\212\212\346\227\266\351\227\264\357\274\232", 0));
        checkBox_2->setText(QApplication::translate("yuhun", "\346\234\211\344\270\221\345\245\263", 0));
        label_5->setText(QApplication::translate("yuhun", "\345\275\223\345\211\215\351\200\211\346\213\251\357\274\232\345\276\241\351\255\202\347\261\273", 0));
        checkBox_3->setText(QApplication::translate("yuhun", "\351\255\202\345\234\237", 0));
    } // retranslateUi

};

namespace Ui {
    class yuhun: public Ui_yuhun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YUHUN_H
