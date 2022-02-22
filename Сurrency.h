#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <initializer_list>
#include <numeric>
#include <string.h>
using namespace std;

class �urrency
{
public:
    virtual double toRub() = 0;
    virtual void show() const = 0;
    virtual ~�urrency() {}
};

