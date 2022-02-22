#include "Purse.h"

void Purse::showM()const {
    
    for (int i = 0; i < p.size(); i++) {
        auto& item = p[i];
        const double& x = moneybox[i];
        item->show(x);
    }    
}


double Purse::sumPerRub() {
    int i = 0;
    double summ = 0;
    for (auto& item : p) {
        double& x = moneybox[i];
        double& r = exchangeRate[i];
        summ = summ + item->toRub(x, r);
        i++;
    }
    return summ;
}

