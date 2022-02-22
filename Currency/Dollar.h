#pragma once
#include "�urrency.h"

class Dollar final :public �urrency {
private:
    double money;
public:
    static double kurse;
    Dollar() = default;
    Dollar(double x) :money(x) {}
    ~Dollar() {}
    Dollar(const Dollar& y) :money(y.money) {}
    double toRub() override;
    void show()const override;
    Dollar& operator=(const Dollar& y) { money = y.money; }
    friend ostream& operator<<(ostream& os, const Dollar& y);
};

