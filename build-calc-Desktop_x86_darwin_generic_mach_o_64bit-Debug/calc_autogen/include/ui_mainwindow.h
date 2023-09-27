/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *clearButton;
    QPushButton *pow;
    QPushButton *mod;
    QPushButton *divide;
    QPushButton *seven;
    QPushButton *mul;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *four;
    QPushButton *minus;
    QPushButton *five;
    QPushButton *six;
    QPushButton *one;
    QPushButton *plus;
    QPushButton *two;
    QPushButton *three;
    QPushButton *zero;
    QPushButton *equal;
    QPushButton *dot;
    QPushButton *acos_2;
    QPushButton *tan;
    QPushButton *sin;
    QPushButton *cos;
    QPushButton *asin;
    QPushButton *sqrt;
    QPushButton *atan;
    QPushButton *acos;
    QPushButton *ln;
    QPushButton *log;
    QPushButton *deleteButton;
    QPushButton *left_br;
    QPushButton *right_br;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(244, 660);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 231, 61));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(120, 70, 121, 61));
        clearButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pow = new QPushButton(centralwidget);
        pow->setObjectName(QString::fromUtf8("pow"));
        pow->setGeometry(QRect(60, 300, 61, 61));
        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        mod->setGeometry(QRect(120, 300, 61, 61));
        divide = new QPushButton(centralwidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(180, 360, 61, 61));
        divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: orange;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(0, 360, 61, 61));
        seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(180, 420, 61, 61));
        mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: orange;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(60, 360, 61, 61));
        eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(120, 360, 61, 61));
        nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(0, 420, 61, 61));
        four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(180, 480, 61, 61));
        minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: orange;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(60, 420, 61, 61));
        five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(120, 420, 61, 61));
        six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(0, 480, 61, 61));
        one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(180, 540, 61, 61));
        plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: orange;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(60, 480, 61, 61));
        two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(120, 480, 61, 61));
        three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	background-color: #B254F0 ;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid red;\n"
"}"));
        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(0, 540, 121, 61));
        equal = new QPushButton(centralwidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        equal->setGeometry(QRect(0, 600, 241, 61));
        dot = new QPushButton(centralwidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setGeometry(QRect(120, 540, 61, 61));
        acos_2 = new QPushButton(centralwidget);
        acos_2->setObjectName(QString::fromUtf8("acos_2"));
        acos_2->setGeometry(QRect(180, 190, 61, 61));
        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(120, 190, 61, 61));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(0, 190, 61, 61));
        sin->setStyleSheet(QString::fromUtf8(""));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(60, 190, 61, 61));
        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        asin->setGeometry(QRect(0, 240, 61, 61));
        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setGeometry(QRect(180, 240, 61, 61));
        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        atan->setGeometry(QRect(120, 240, 61, 61));
        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        acos->setGeometry(QRect(60, 240, 61, 61));
        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(0, 300, 61, 61));
        log = new QPushButton(centralwidget);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(180, 300, 61, 61));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(0, 70, 121, 61));
        left_br = new QPushButton(centralwidget);
        left_br->setObjectName(QString::fromUtf8("left_br"));
        left_br->setGeometry(QRect(0, 130, 121, 61));
        right_br = new QPushButton(centralwidget);
        right_br->setObjectName(QString::fromUtf8("right_br"));
        right_br->setGeometry(QRect(120, 130, 121, 61));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        clearButton->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        acos_2->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        left_br->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        right_br->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
