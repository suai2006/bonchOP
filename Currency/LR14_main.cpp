#include "Dollar.h"
#include "Euro.h"
#include "Pound.h"
#include "Purse.h"
int Menu();
int GetNumber(int, int);
void ExitBack();
void AddMoney(Purse&);
void GetMoney(Purse&);

int main() {
    setlocale(LC_ALL, "Russian");
    
    Dollar *usd = new Dollar(20.50);
    Euro *euro = new Euro(2.30);
    Pound *pound = new Pound(5);
    Purse pp{ usd,euro,pound };
    pp.showM();
    cout << "RUB: " << (int)pp.sumPerRub() << " cop: " << int((pp.sumPerRub() - (int)pp.sumPerRub()) * 100);
    
    bool done = false;
    while (!done)
    {
        switch (Menu())
        {
        case 1: AddMoney(pp); break;
        case 2: GetMoney(pp); break;
        case 3: std::cout << "����� ������." << std::endl;
            done = true; break;
        }
    }
    return 0;
}
// ����� ����
int Menu()
{
    std::cout << "\n===== ������� ���� =====" << std::endl;
    std::cout << "1 - ������ ������" << std::endl;
    std::cout << "2 - ������� ������" << std::endl;
    std::cout << "3 - �����" << std::endl;
    return GetNumber(1, 3);
}
// ���� ������ ����� � �������� ���������
int GetNumber(int min, int max)
{
    int number = min - 1; while (true)
    {
        std::cin >> number;
        if ((number >= min) && (number <= max) && (std::cin.peek() == '\n')) break;
        else {
            std::cout << "��������� ���� (��������� ����� �� " << min << " �� " << max << "):" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n') {

            };
        }
    }
    return number;
}
// ������� � ������� � �������� ����
void ExitBack()
{
    std::cout << "������� Enter." << std::endl;
    std::cin.get();
    std::cin.get();
}

// ����� ������ ��� ����������
void AddMoney(Purse& Purse)
{
    std::cout << "=== �������� ������ ������� ������ ������ ===" << std::endl;
    std::cout << "1 - usd\t\t2 - euro\t\t3 - pound" << std::endl;
    int i = GetNumber(1, 3) - 1;  
    
    std::cout << "������� �����: ";
    double money;
    std::cin >> money;
    Dollar* usd = new Dollar(money);
    Purse.add(usd);
    Purse.addMoney();
    Purse.showM();
    cout << "RUB: " << (int)Purse.sumPerRub() << " cop: " << int((Purse.sumPerRub() - (int)Purse.sumPerRub()) * 100) << std::endl;
    //auto& s = Purse.p[i];
    //s->show();
    ExitBack();
}

void GetMoney(Purse& p) {
    std::cout << "=== �������� ������ ��� ������ ===" << std::endl;
    std::cout << "1 - usd" << std::endl;
    std::cout << "2 - euro" << std::endl;
    std::cout << "3 - pound" << std::endl;
    int i = GetNumber(1, 3) - 1;
    ExitBack();
}