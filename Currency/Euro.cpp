#include "Euro.h"
double Euro::toRub(double x, double r) {
    return x * r;
}
void Euro::show(double x)const {
    cout << fixed << setprecision(2) << "EUR: " << static_cast<int>(x) << " eurocent: " << (x - (int)x) * 100 << endl;
}

