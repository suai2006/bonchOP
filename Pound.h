#pragma once
#include "�urrency.h"

class Pound final :public �urrency
{
private:
    double money;
public:
    static double kurse;
    Pound() = default;
    Pound(double x) :money(x) {}
    ~Pound() {}
    Pound(const Pound& y) :money(y.money) {}
    double toRub() override;
    void show()const override;
    Pound& operator=(const Pound& y) { money = y.money; }
    friend ostream& operator<<(ostream & os, const Pound& y);
};

