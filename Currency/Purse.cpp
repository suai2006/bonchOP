#include "Purse.h"
/*
void Purse::showM()const {
    for (vector<Ñurrency*>::const_iterator iter = p.begin(); iter != p.end(); iter++) {
        (*iter)->show();
        cout << endl;
    }
}
*/
void Purse::showM()const {
    for_each(p.begin(), p.end(), mem_fn(&Ñurrency::show));
}

double Purse::sumPerRub() {
    return accumulate(p.begin(), p.end(), 0.0, [](double x, Ñurrency* c) {
        return x + c->toRub();
    });
}

void Purse::addMoney()
{
    //&p[1];
}



