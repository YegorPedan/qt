#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->zero, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->one, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->two, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->three, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->four, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->five, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->six, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->seven, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->eight, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->nine, SIGNAL(clicked()), this, SLOT(digits_numbers()));



    connect(ui->clearButton, SIGNAL(clicked()), this, SLOT(clearAll()));
    connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(deleteChar()));

    // Connect buttons to slots for various operations
        connect(ui->sin, SIGNAL(clicked()), this, SLOT(calculateSin()));
        connect(ui->cos, SIGNAL(clicked()), this, SLOT(calculateCos()));
        connect(ui->tan, SIGNAL(clicked()), this, SLOT(calculateTan()));
        connect(ui->acos, SIGNAL(clicked()), this, SLOT(calculateAcos()));
        connect(ui->asin, SIGNAL(clicked()), this, SLOT(calculateAsin()));
        connect(ui->atan, SIGNAL(clicked()), this, SLOT(calculateAtan()));
        connect(ui->sqrt, SIGNAL(clicked()), this, SLOT(calculateSqrt()));
        connect(ui->ln, SIGNAL(clicked()), this, SLOT(calculateLn()));
        connect(ui->pow, SIGNAL(clicked()), this, SLOT(calculatePow()));
        connect(ui->mod, SIGNAL(clicked()), this, SLOT(calculateMod()));
        connect(ui->log, SIGNAL(clicked()), this, SLOT(calculateLog()));

    // +, -, %, ^
       connect(ui->plus, SIGNAL(clicked()), this, SLOT(printPlus()));
       connect(ui->minus, SIGNAL(clicked()), this, SLOT(printMinus()));
       connect(ui->mul, SIGNAL(clicked()), this, SLOT(printMul()));
       connect(ui->divide, SIGNAL(clicked()), this, SLOT(printDivide()));

       connect(ui->dot, SIGNAL(clicked()), this, SLOT(printDot()));

       connect(ui->left_br, SIGNAL(clicked()), this, SLOT(printLeftBr()));
        connect(ui->right_br, SIGNAL(clicked()), this, SLOT(printRightBr()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::digits_numbers()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if (!clickedButton) {
        return; // Ensure that the sender is a QPushButton
    }

    QString currentText = ui->label->text();
    QString buttonText = clickedButton->text();

    // Append the clicked digit to the current label text
    QString newLabel = currentText + buttonText;

    // Update the label with the new text
    ui->label->setText(newLabel);
}

void MainWindow::clearAll()
{
    ui->label->clear();
}

void MainWindow::deleteChar()
{
    QString currentText = ui->label->text();
    if (!currentText.isEmpty()) {
        currentText.chop(1); // Remove the last character
        ui->label->setText(currentText);
    }
}


void MainWindow::calculateSin() {
    QString currentText = ui->label->text();
    QString newText = currentText + "sin(";
    ui->label->setText(newText);
}



void MainWindow::calculateCos() {
    QString currentText = ui->label->text();
    QString newText = currentText + "cos(";
    ui->label->setText(newText);
}

void MainWindow::calculateTan() {
    QString currentText = ui->label->text();
    QString newText = currentText + "tan(";
    ui->label->setText(newText);
}

void MainWindow::calculateAcos() {
    QString currentText = ui->label->text();
    QString newText = currentText + "acos(";
    ui->label->setText(newText);
}

void MainWindow::calculateAsin() {
    QString currentText = ui->label->text();
    QString newText = currentText + "asin(";
    ui->label->setText(newText);
}

void MainWindow::calculateAtan() {
    QString currentText = ui->label->text();
    QString newText = currentText + "atan(";
    ui->label->setText(newText);
}

void MainWindow::calculateSqrt() {
    QString currentText = ui->label->text();
    QString newText = currentText + "sqrt(";
    ui->label->setText(newText);
}

void MainWindow::calculateLn() {
    QString currentText = ui->label->text();
    QString newText = currentText + "ln(";
    ui->label->setText(newText);
}

void MainWindow::calculatePow() {
    QString currentText = ui->label->text();
    QString newText = currentText + "^";
    ui->label->setText(newText);
}

void MainWindow::calculateMod() {
    QString currentText = ui->label->text();
    QString newText = currentText + "%";
    ui->label->setText(newText);
}

void MainWindow::calculateLog() {
    QString currentText = ui->label->text();
    QString newText = currentText + "log(";
    ui->label->setText(newText);
}

void MainWindow::printPlus() {
    QString currentText = ui->label->text();
    QString newText = currentText + "+";
    ui->label->setText(newText);
}

void MainWindow::printMinus() {
    QString currentText = ui->label->text();
    QString newText = currentText + "-";
    ui->label->setText(newText);
}

void MainWindow::printMul() {
    QString currentText = ui->label->text();
    QString newText = currentText + "*";
    ui->label->setText(newText);
}

void MainWindow::printDivide() {
    QString currentText = ui->label->text();
    QString newText = currentText + "/";
    ui->label->setText(newText);
}

void MainWindow::printLeftBr() {
    QString currentText = ui->label->text();
    QString newText = currentText + "(";
    ui->label->setText(newText);
}

void MainWindow::printRightBr() {
    QString currentText = ui->label->text();
    QString newText = currentText + ")";
    ui->label->setText(newText);
}

void MainWindow::printDot() {
    QString currentText = ui->label->text();
    QString newText = currentText + ".";
    ui->label->setText(newText);
}
