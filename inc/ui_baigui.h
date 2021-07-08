/********************************************************************************
** Form generated from reading UI file 'baigui.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
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
    QLabel *label_4;
    QCheckBox *checkBox;
    QLineEdit *times;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QWidget *baigui)
    {
        if (baigui->objectName().isEmpty())
            baigui->setObjectName(QStringLiteral("baigui"));
        baigui->resize(338, 181);
        baigui->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(baigui);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 70, 81, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));
        checkBox = new QCheckBox(baigui);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(220, 40, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));
        times = new QLineEdit(baigui);
        times->setObjectName(QStringLiteral("times"));
        times->setGeometry(QRect(110, 70, 91, 20));
        pushButton = new QPushButton(baigui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 80, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));
        label_3 = new QLabel(baigui);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 160, 91, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\215\216\346\226\207\345\256\213\344\275\223\";"));

        retranslateUi(baigui);

        QMetaObject::connectSlotsByName(baigui);
    } // setupUi

    void retranslateUi(QWidget *baigui)
    {
        baigui->setWindowTitle(QApplication::translate("baigui", "Form", 0));
        label_4->setText(QApplication::translate("baigui", "\347\240\270\350\261\206\346\254\241\346\225\260\357\274\232", 0));
        checkBox->setText(QApplication::translate("baigui", "\345\256\214\346\210\220\345\205\263\346\234\272", 0));
        times->setText(QApplication::translate("baigui", "100", 0));
        pushButton->setText(QApplication::translate("baigui", "\345\274\200\345\247\213", 0));
        label_3->setText(QApplication::translate("baigui", "\345\275\223\345\211\215\351\200\211\346\213\251\357\274\232\347\231\276\351\254\274", 0));
    } // retranslateUi

};

namespace Ui {
    class baigui: public Ui_baigui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAIGUI_H
