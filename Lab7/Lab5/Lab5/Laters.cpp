#include <iostream>
#include "Laters.h";
using namespace std;

void Laters(char symbol, int difference, int num1, int num2, int num3, int num4) {
    if (num1 <= symbol && symbol <= num2) {
        difference = symbol + 32;
        cout << "��� ������� " << (int)symbol <<
            " � ��� ���������: " << difference << endl <<
            "�������� " << difference - symbol << endl;
    }
    else if (num3 <= symbol && symbol <= num4) {
        difference = symbol - 32;
        cout << "��� ������� " << (int)symbol <<
            " � ��� ���������: " << difference << endl <<
            "�������� " << symbol - difference << endl;
    }
    else {
        cout << "������. ������� ������ �������� ��������\n";
    }
}