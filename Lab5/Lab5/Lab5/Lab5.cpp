#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

void task1() {
    char symbol;
    int difference;
    cout << "Введите символ латинского алфавита:" << endl;
    cin >> symbol;
    if (65 <= symbol && symbol <= 90) {
        difference = symbol + 32;
        cout << "код символа " << (int)symbol <<
            " и код строчной: " << difference << endl <<
            "Разность " << difference - symbol << endl;
    }
    else if (97 <= symbol && symbol <= 122) {
        difference = symbol - 32;
        cout << "код символа " << (int)symbol <<
            " и код прописной: " << difference << endl <<
            "Разность " << symbol - difference << endl;
    }
    else {
        cout << "Ошибка. Введите символ латинского алфавита\n";
    }
}

void task2() {
    char symbol;
    int difference;
    cout << "Введите символ русского алфавита:" << endl;
    cin >> symbol;
    if (-64 <= symbol && symbol <= -33) {
        difference = symbol + 32;
        cout << "код символа " << (int)symbol <<
            " и код прописной: " << difference << endl <<
            "Разность " << difference - symbol << endl;
    }
    else if (-32 <= symbol && symbol <= -1) {
        difference = symbol - 32;
        cout << "код символа " << (int)symbol <<
            " и код прописной: " << difference << endl <<
            "Разность " << symbol - difference << endl;
    }
    else {
        cout << "Ошибка. Введите символ русского алфавита\n";
    }
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
    switch (nOption)
    {
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

int main(void)
{
    locale rus("russian");
    locale::global(rus);

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, ".1251");
    setlocale(LC_ALL, "Rus");
    //task1();
    //task2();
    //task3();
    task4();
    return 1;
}


