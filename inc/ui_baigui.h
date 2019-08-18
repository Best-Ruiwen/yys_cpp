/********************************************************************************
** Form generated from reading UI file 'baigui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAIGUI_H
#define UI_BAIGUI_H

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

class Ui_baigui
{
public:
    QLineEdit *ysize;
    QLabel *label_2;
    QLabel *label_4;
    QCheckBox *checkBox;
    QLineEdit *times;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *xsize;
    QLabel *label_3;

    void setupUi(QWidget *baigui)
    {
        if (baigui->objectName().isEmpty())
            baigui->setObjectName(QStringLiteral("baigui"));
        baigui->resize(338, 181);
        baigui->setStyleSheet(QStringLiteral(""));
        ysize = new QLineEdit(baigui);
        ysize->setObjectName(QStringLiteral("ysize"));
        ysize->setGeometry(QRect(150, 30, 31, 21));
        label_2 = new QLabel(baigui);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 30, 16, 21));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"Adobe Devanagari\";"));
        label_4 = new QLabel(baigui);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 80, 81, 21));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"Adobe Devanagari\";"));
        checkBox = new QCheckBox(baigui);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(200, 30, 91, 31));
        QFont font;
        font.setPointSize(12);
        checkBox->setFont(font);
        times = new QLineEdit(baigui);
        times->setObjectName(QStringLiteral("times"));
        times->setGeometry(QRect(90, 80, 91, 20));
        pushButton = new QPushButton(baigui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 70, 81, 31));
        label = new QLabel(baigui);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 81, 21));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Adobe Devanagari\";"));
        xsize = new QLineEdit(baigui);
        xsize->setObjectName(QStringLiteral("xsize"));
        xsize->setGeometry(QRect(90, 30, 31, 21));
        label_3 = new QLabel(baigui);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 160, 91, 20));

        retranslateUi(baigui);

        QMetaObject::connectSlotsByName(baigui);
    } // setupUi

    void retranslateUi(QWidget *baigui)
    {
        baigui->setWindowTitle(QApplication::translate("baigui", "Form", 0));
        label_2->setText(QApplication::translate("baigui", "X", 0));
        label_4->setText(QApplication::translate("baigui", "\347\240\270\350\261\206\346\254\241\346\225\260\357\274\232", 0));
        checkBox->setText(QApplication::translate("baigui", "\345\256\214\346\210\220\345\205\263\346\234\272", 0));
        times->setText(QApplication::translate("baigui", "100", 0));
        pushButton->setText(QApplication::translate("baigui", "\345\274\200\345\247\213", 0));
        label->setText(QApplication::translate("baigui", "\347\252\227\345\217\243\345\244\247\345\260\217\357\274\232", 0));
        label_3->setText(QApplication::translate("baigui", "\345\275\223\345\211\215\351\200\211\346\213\251\357\274\232\347\231\276\351\254\274", 0));
    } // retranslateUi

};

namespace Ui {
    class baigui: public Ui_baigui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAIGUI_H
