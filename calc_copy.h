#ifndef CALC_COPY_H
#define CALC_COPY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calc; }
QT_END_NAMESPACE

class Calc : public QMainWindow
{
    Q_OBJECT

public:
    Calc(QWidget *parent = nullptr);
    ~Calc();

private:
    Ui::Calc *ui;

private slots:
    void digit_pressed();
    void on_Dot_released();
    void unary_operation_pressed();
    void on_Equals_released();
    void binary_operation_pressed();
    void on_Clear_released();
};
#endif // CALC_COPY_H
