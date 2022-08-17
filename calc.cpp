#include "calc.h"
#include "ui_calc.h"
#include "supportcalc.h"
#include<QFile>
#include<math.h>
#include<QApplication>


Calc::Calc(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Calc)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(ShowText()));

    connect(ui->ChangeSign,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->OpenBracket,SIGNAL(released()),this,SLOT(ShowText()));
    connect(ui->CloseBracket,SIGNAL(released()),this,SLOT(ShowText()));


    connect(ui->Add,SIGNAL(released()),this,SLOT(unaryoperator()));
    connect(ui->Subtract,SIGNAL(released()),this,SLOT(unaryoperator()));
    connect(ui->Multiply,SIGNAL(released()),this,SLOT(unaryoperator()));
    connect(ui->Divide,SIGNAL(released()),this,SLOT(unaryoperator()));
    connect(ui->Equals,SIGNAL(released()),this,SLOT(EqualsReleased()));

}

Calc::~Calc()
{
    delete ui;
}

void Calc::ShowText()
{
    QPushButton *button = (QPushButton*)sender();
    QString TextOnScreen = ui->label->text() + button->text();
    ui->label->setText(TextOnScreen);
    ui->label_2->setText(ui->label->text()) ;
}

void Calc::unaryoperator(){

    QPushButton *button=(QPushButton*)sender();
    ui->label->setText(ui->label->text() +' '+ button->text() +' ');
    ui->label_2->setText(ui->label->text());
}

void Calc::EqualsReleased()
{

    std::string expression=ui->label->text().toStdString();
    long long result = evaluate  (expression);
    ui->label->setText(QString::number(result,'g',15));
}



