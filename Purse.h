#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <initializer_list>
#include <numeric>
#include <string.h>
#include <algorithm> 
#include <functional>
#include "Ñurrency.h"
using namespace std;
class Purse
{
private:
    
public:
    Purse() = default;
    Purse(Ñurrency* c) { p.push_back(c); }
    Purse(const Purse & p) = default;
    Purse& operator=(const Purse & p) = default;
    Purse(initializer_list<Ñurrency*> && l) :p(move(l)) {}
    ~Purse() {}
    void add(Ñurrency* c) { p.push_back(c); }
    void showM()const;
    double sumPerRub();
    void addMoney();
    vector<Ñurrency*>p;
};

