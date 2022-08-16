#ifndef CALC_H
#define CALC_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stack>
#include <vector>


QT_BEGIN_NAMESPACE
namespace Ui { class Calc; }
QT_END_NAMESPACE

class Calc : public QMainWindow
{
    Q_OBJECT

public:
    Calc(QWidget *parent = nullptr);
    ~Calc();

public:
    Ui::Calc *ui;
bool waitingForOperand;

public slots:
//    void digit_pressed();
    void EqualsReleased();
    void ShowText();


private:
    double m_firstNum;
    double m_secondNum;
    double m_result;
    QString label = "";
    QString label_2 = "";


};
#endif // CALC_H
