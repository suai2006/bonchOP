#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <initializer_list>
#include <numeric>
#include <string.h>
#include <algorithm> 
#include <functional>
#include "�urrency.h"
using namespace std;
class Purse
{
private:
    
public:
    Purse() = default;
    Purse(�urrency* c) { p.push_back(c); }
    Purse(const Purse & p) = default;
    Purse& operator=(const Purse & p) = default;
    Purse(initializer_list<�urrency*> && l) :p(move(l)) {}
    ~Purse() {}
    void add(�urrency* c) { p.push_back(c); }
    void showM()const;
    double sumPerRub();
    void addMoney();
    vector<�urrency*>p;
};

