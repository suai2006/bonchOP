#include "Dollar.h"
#include "Euro.h"
#include "Pound.h"
#include "Header.h"

int main() {

    setlocale(LC_ALL, "Russian");

    Purse pp; // Кошелек

    Dollar *usd = new Dollar;
    Euro *euro = new Euro;
    Pound *pound = new Pound;

    // Формально может не быть ничего, не делал проверки, поэтому если пусто то лучше добавить в moneyBox 0.0
    pp.add(usd, 20.50, 68.34);
    pp.add(euro, 15.20,73.28);
    pp.add(pound, 15.20, 88.23);

    pp.showM();
    cout << "RUB: " << (int)pp.sumPerRub() << " cop: " << int((pp.sumPerRub() - (int)pp.sumPerRub()) * 100);
    
    bool done = false;
    while (!done)
    {
        //exchangeRateChage
        switch (Menu())
        {
        case 1: exchange(pp); break;
        case 2: AddMoney(pp); break;
        case 3: GetMoney(pp); break;
        case 4: exchangeRateChage(pp); break;
        case 5: std::cout << "Конец работы." << std::endl;
            done = true; break;
        }
    }
    return 0;
}
