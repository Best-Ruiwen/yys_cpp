/********************************************************************************
** Form generated from reading UI file 'yuhun.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
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
    QLabel *label_4;
    QCheckBox *checkBox;
    QLineEdit *times;
    QLineEdit *time;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QWidget *yuhun)
    {
        if (yuhun->objectName().isEmpty())
            yuhun->setObjectName(QStringLiteral("yuhun"));
        yuhun->resize(338, 181);
        label_4 = new QLabel(yuhun);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 81, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));
        checkBox = new QCheckBox(yuhun);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(200, 50, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));
        times = new QLineEdit(yuhun);
        times->setObjectName(QStringLiteral("times"));
        times->setGeometry(QRect(90, 100, 91, 20));
        time = new QLineEdit(yuhun);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(90, 50, 91, 21));
        pushButton = new QPushButton(yuhun);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 90, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));
        label_3 = new QLabel(yuhun);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));
        label_5 = new QLabel(yuhun);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 160, 101, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));

        retranslateUi(yuhun);

        QMetaObject::connectSlotsByName(yuhun);
    } // setupUi

    void retranslateUi(QWidget *yuhun)
    {
        yuhun->setWindowTitle(QApplication::translate("yuhun", "Form", 0));
        label_4->setText(QApplication::translate("yuhun", "\345\276\205\345\210\267\346\254\241\346\225\260\357\274\232", 0));
        checkBox->setText(QApplication::translate("yuhun", "\345\210\267\345\256\214\345\205\263\346\234\272", 0));
        times->setText(QApplication::translate("yuhun", "100", 0));
        pushButton->setText(QApplication::translate("yuhun", "\345\274\200\345\247\213", 0));
        label_3->setText(QApplication::translate("yuhun", "\344\270\200\346\212\212\346\227\266\351\227\264", 0));
        label_5->setText(QApplication::translate("yuhun", "\345\275\223\345\211\215\351\200\211\346\213\251\357\274\232\345\276\241\351\255\202\347\261\273", 0));
    } // retranslateUi

};

namespace Ui {
    class yuhun: public Ui_yuhun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YUHUN_H
