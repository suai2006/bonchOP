#pragma once
#include "�urrency.h"

class Euro final :public �urrency
{
private:

public:
    static double kurse;
    Euro() {};
    ~Euro() {}
    double toRub(double x, double r) override;
    void show(double x)const override;
};

