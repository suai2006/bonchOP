#pragma once
#include "�urrency.h"

class Dollar final :public �urrency {
private:
    
public:
    static double kurse;
    Dollar() {};
    ~Dollar() {}
    double toRub(double x, double r) override;
    void show(double x) const override;
};

