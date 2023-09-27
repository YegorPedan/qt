#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digits_numbers();
    void clearAll();
    void deleteChar();
    void calculateSin();
    void calculateCos();
    void calculateTan();
    void calculateAcos();
    void calculateAsin();
    void calculateAtan();
    void calculateSqrt();
    void calculateLn();
    void calculatePow();
    void calculateMod();
    void calculateLog();

    void printPlus();
    void printMinus();
    void printMul();
    void printDivide();

    void printDot();

    void printLeftBr();
    void printRightBr();
};





#endif // MAINWINDOW_H
