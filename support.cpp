#include "support.h"

void support::reset() {
   hasLValue = false;
   hasRValue = false;
   lvalue = 0.0;
   rvalue = 0.0;
   result = 0;
}

support::support(double lvalue, double rvalue) : lvalue(lvalue), rvalue(rvalue), result(0),
                                                  hasLValue(true), hasRValue(true) {}

void support::performOperation(Operator op) {
    switch (op) {
    case ADD:
        add();
        break;
}
