#include "calc.h"
#include <QApplication>
#include <qstack.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calc w;
    w.show();
    return a.exec();

}
