#pragma once
#include "Ñurrency.h"

class Euro final :public Ñurrency
{
private:
    double money;
public:
    static double kurse;
    Euro() = default;
    Euro(double x) :money(x) {}
    ~Euro() {}
    Euro(const Euro & y) :money(y.money) {}
    double toRub() override;
    void show()const override;
    Euro& operator=(const Euro & y) { money = y.money; }
    friend ostream& operator<<(ostream & os, const Euro & y);
};

