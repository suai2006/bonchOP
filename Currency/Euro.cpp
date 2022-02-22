#include "Euro.h"

ostream& operator<<(ostream& os, const Euro& y) {
    os << fixed << setprecision(2) << "EUR: " << static_cast<int>(y.money) << " eurocent: " << (y.money - (int)y.money) * 100 << endl;
    return os;
}
double Euro::toRub() {
    return money * kurse;
}
void Euro::show()const {
    cout << fixed << setprecision(2) << "EUR: " << static_cast<int>(money) << " eurocent: " << (money - (int)money) * 100 << endl;
}
double Euro::kurse = 63.81;
