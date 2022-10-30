#include <iostream>
#include "Laters.h"
#include <locale>
#include <windows.h>

using namespace std;

void task1() {
    char c;
    cin >> c;
 
    for (int i = 0; i < 3; i++)
    {
        if (c == 47) return;
        if (65 <= c && c <= 90) {
            Laters(c);
            break;
            
            
        }
        else if (97 <= c && c <= 122) {
            Laters1(c);
            break;
            
        }
        else {
            cout << "Ошибка. Введите символ латинского алфавита\n";
            break;

        }
        
    }
    task1();
}
void task2() {
    char c;
    
    cin >> c;
    for (int i = 0; i < 3; i++)
    {
        if (c == 47) return;
        if (-64 <= c && c <= -33) {
            Laters(c);
            break;
        }
        else if (-32 <= c && c <= -1) {
            Laters1(c);
            break;
        }
        else {
            cout << "Ошибка. Введите символ русского алфавита\n";
            break;
        }
    }
    task2();
}

void task3() {
    char c;
    
    cin >> c;
    for (int i = 0; i < 3; i++)
    {
        if (c == 47) return;
        if (48 <= c && c <= 57) {
            cout << "код символа " << (int)c << endl;
            break;
        }
        else {
            cout << "Ошибка. Введите цифру\n";
            break;
        }
    }
    task3();
}
int main()
{
    
    locale rus("russian");
    locale::global(rus);

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_CTYPE, ".1251");
    setlocale(LC_ALL, "Rus");

    cout << "Для выхода испульзуем символ / \n";
    cout << "Введите символ латинского алфавита:\n";
    task1();
    cout << "Введите символ русского алфавита:\n";
    task2();
    cout << "Введите цифру:\n";
    task3();
}

