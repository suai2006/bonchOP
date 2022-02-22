
#include "Dollar.h"

double Dollar::toRub(double x, double r) {
    return x * r;
}

void Dollar::show(double x)const {
    cout << fixed << setprecision(2) << "$: " << static_cast<int>(x) << " cent: " << (x - (int)x) * 100 << endl;
}