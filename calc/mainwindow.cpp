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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::digits_numbers()
{
    QPushButton *btn = (QPushButton *)sender();
    double numbers;
    numbers = (ui->label->text() + btn->text()).toDouble();
    QString new_label = QString::number(numbers, 'g', 155);
    ui->label->setText(new_label);
}
