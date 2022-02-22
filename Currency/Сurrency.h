#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <initializer_list>
#include <numeric>
#include <string.h>
using namespace std;

class Ñurrency
{
public:
    virtual double toRub(double x, double r) = 0;
    virtual void show(double x) const = 0;
    virtual ~Ñurrency() {}
};

