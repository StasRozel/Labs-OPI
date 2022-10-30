#include <iostream>
#include "Laters.h";
using namespace std;

void Laters(char symbol, int difference, int num1, int num2, int num3, int num4) {
    if (num1 <= symbol && symbol <= num2) {
        difference = symbol + 32;
        cout << "код символа " << (int)symbol <<
            " и код прописной: " << difference << endl <<
            "Разность " << difference - symbol << endl;
    }
    else if (num3 <= symbol && symbol <= num4) {
        difference = symbol - 32;
        cout << "код символа " << (int)symbol <<
            " и код прописной: " << difference << endl <<
            "Разность " << symbol - difference << endl;
    }
    else {
        cout << "Ошибка. Введите символ русского алфавита\n";
    }
}