#include "Pound.h"
ostream& operator<<(ostream& os, const Pound& y) {
    os << fixed << setprecision(2) << "POUND: " << static_cast<int>(y.money) << " pence: " << (y.money - (int)y.money) * 100 << endl;
    return os;
}
double Pound::toRub() {
    return money * kurse;
}
void Pound::show()const {
    cout << fixed << setprecision(2) << "POUND: " << static_cast<int>(money) << " pence: " << (money - (int)money) * 100 << endl;
}
double Pound::kurse = 63.81;