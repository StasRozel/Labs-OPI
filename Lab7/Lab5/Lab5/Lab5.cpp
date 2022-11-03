#include <iostream>
#include <windows.h>
#include "Laters.h"
#include <locale>

using namespace std;

void SymbolLatinKod() {
    char symbol;
    int difference = 0;
    cout << "Введите символ латинского алфавита:" << endl;
    cin >> symbol;
    Laters(symbol, difference, 65, 90,  97, 122);
}

void SymbolRusKod() {
    char symbol;
    int difference = 0;
    cout << "Введите символ русского алфавита:" << endl;
    cin >> symbol;
    Laters(symbol, difference, -64, -33, -32, -1);
}

void task3() {
    char number;
    cout << "Введите цифру:" << endl;
    cin >> number;
    if (48 <= number && number <= 57) {
        cout << "код символа " << (int)number << endl;
    }
    else {
        cout << "Ошибка. Введите цифру\n";
    }
}

void task4() {
    int nOption;
    cout << "Какая сегодня погода?(1 - хорошая, 2 - плохая)\n";
    cin >> nOption;
    switch (nOption) {
    case 1: 
        cout << "Погода хорошая, студент идет гулять";
        break;
    case 2: 
        cout << "Погода плохая, студет пишет реферат, обедает, пишет реферат";
        break;
    default:
        cout << "Введите значение 1 или 2";
        break;
    }
}

void dop2() {
    const char* str = u8"Ё";

    for (unsigned char* p = (unsigned char*)str; *p; ++p)
        printf(*p >> 6 == 2 ? " %.02X" : "\n%.02X", *p);
}

int main(void) {
    locale rus("russian");
    locale::global(rus);

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_CTYPE, ".1251");
    setlocale(LC_ALL, "Rus");
    
    /*task1();
    task2();
    task3();
    task4();*/
    dop2();
    return 1;
}


