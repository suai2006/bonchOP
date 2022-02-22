#pragma once
#include "Ñurrency.h"

class Dollar final :public Ñurrency {
private:
    
public:
    static double kurse;
    Dollar() {};
    ~Dollar() {}
    double toRub(double x, double r) override;
    void show(double x) const override;
};

