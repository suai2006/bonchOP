#pragma once
#include <iostream>
#include <string.h>
#include "Purse.h"

// ���� ������ ����� � �������� ���������
int GetNumber(int min, int max){

    int number = min - 1; 
    while (true) {

        std::cin >> number;
        if ((number >= min) && (number <= max) && (std::cin.peek() == '\n')) break;
        else {
            std::cout << "��������� ���� (��������� ����� �� " << min << " �� " << max << "):" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n') {};
        }
    }
    return number;
}

// ����� ����
int Menu(){

    std::cout << "\n===== ������� ���� =====" << std::endl;
    std::cout << "1 - �������������� ������" << std::endl;
    std::cout << "2 - ������ ������" << std::endl;
    std::cout << "3 - ������� ������" << std::endl;
    std::cout << "4 - �������� ����" << std::endl;
    std::cout << "5 - �����" << std::endl;

    std::cout << std::endl;
    std::cout << "�������� �����: ";
    return GetNumber(1, 5);

}

// ������� � ������� � �������� ����
void ExitBack(){

    std::cout << "������� Enter." << std::endl;
    std::cin.get();
    std::cin.get();

}

void subMenu(string str) {

    std::cout << "=== " << str << " ===" << std::endl;
    std::cout << "1 - usd | 2 - euro | 3 - pound" << std::endl;
    std::cout << std::endl;

}

// ����� ������ ��� ����������
void AddMoney(Purse& Purse){

    subMenu("�������� ������ ������� ������ ������");
    std::cout << "�������� �����: ";
    int i = GetNumber(1, 3) - 1;

    std::cout << "������� �����: ";
    double money;
    std::cin >> money;
    Purse.addMoney(i, money);

    cout << "RUB: " << (int)Purse.sumPerRub() << " cop: " << int((Purse.sumPerRub() - (int)Purse.sumPerRub()) * 100) << std::endl;

    ExitBack();
}

void GetMoney(Purse& Purse) {

    subMenu("�������� ������ ��� ������");
    std::cout << "�������� �����: ";
    int i = GetNumber(1, 3) - 1;

    std::cout << "������� ����� ������� ������ �������: ";
    double money;
    std::cin >> money;
    Purse.getMoney(i, money);

    ExitBack();
}

void exchange(Purse& Purse) {
    subMenu("�������������� ������");
    std::cout << "�������� �����: ";
    int i = GetNumber(1, 3) - 1;
    Purse.toRub(i);
}

void exchangeRateChage(Purse& Purse) {

    subMenu("�������� ������ ��� ��������� �����");
    std::cout << "�������� �����: ";
    int i = GetNumber(1, 3) - 1;

    std::cout << "������� ������� ����� ����: ";
    double rate;
    std::cin >> rate;
    Purse.rateChage(i, rate);

    ExitBack();
}