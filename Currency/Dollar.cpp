
#include "Dollar.h"

ostream& operator<<(ostream& os, const Dollar& y) {
    os << fixed << setprecision(2) << "$: " << static_cast<int>(y.money) << " cent: " << (y.money - (int)y.money) * 100 << endl;
    return os;
}

double Dollar::toRub() {
    return money * kurse;
}
void Dollar::show()const {
    cout << fixed << setprecision(2) << "$: " << static_cast<int>(money) << " cent: " << (money - (int)money) * 100 << endl;
}

double Dollar::kurse = 60.66;