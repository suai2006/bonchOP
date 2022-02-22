#include "Pound.h"

double Pound::toRub(double x, double r) {
    return x * r;
}
void Pound::show(double x)const {
    cout << fixed << setprecision(2) << "POUND: " << static_cast<int>(x) << " pence: " << (x - (int)x) * 100 << endl;
}
