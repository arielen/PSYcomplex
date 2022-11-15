#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegularExpression rx("^[A-zА-яЁё]+$");
    QValidator *validatorInt = new QIntValidator(6, 18, this),
            *validatorString = new QRegularExpressionValidator(rx, this);
    ui->eAge->setValidator(validatorInt);
    ui->eLastname->setValidator(validatorString);
    ui->eName->setValidator(validatorString);
    ui->eSurname->setValidator(validatorString);





}

MainWindow::~MainWindow()
{
    delete ui;
}

