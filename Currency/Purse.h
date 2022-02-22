#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <string.h>
#include "Ñurrency.h"

using namespace std;
class Purse
{
private:
    vector<Ñurrency*> p;
    vector <double> moneybox;
    vector <double> exchangeRate;
    
public:
    Purse() = default;
    Purse(Ñurrency* c) { p.push_back(c); }
    Purse(const Purse & p) = default;
    Purse& operator=(const Purse & p) = default;
    ~Purse() {}

    void showM()const;
    double sumPerRub();

    void addMoney(int i, double x) {
        const auto& item = p[i];
        double& money = moneybox[i];
        money = money + x;
        showM();
    }   

    void getMoney(int i, double x) {
        const auto& item = p[i];
        double& money = moneybox[i];
        if (money >= x) {
            money = money - x;
            showM();  
            cout << "RUB: " << (int)sumPerRub() << " cop: " << int((sumPerRub() - (int)sumPerRub()) * 100) << std::endl;
        }
        else {
            cout << "Ó âàñ ñòîëüêî íåò" << endl;
        }
        
    }

    void add(Ñurrency* c, double x, double rate) {
        p.push_back(c);
        moneybox.push_back(x);
        exchangeRate.push_back(rate);
    }

    void rateChage(int i, double x) {
        const auto& item = p[i];
        double& eRate = exchangeRate[i];
        eRate = x;
        showM();
        cout << "RUB: " << (int)sumPerRub() << " cop: " << int((sumPerRub() - (int)sumPerRub()) * 100) << std::endl;
    }

    void toRub(int i) {
        const auto& item = p[i];
        double& money = moneybox[i];
        double& eRate = exchangeRate[i];
        cout << "1 ue = " << eRate << "ð." << endl;
        cout << money << " ue = " << item->toRub(money, eRate) << "ð" << endl;
    }
};

