#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int number;
    cout << "Введите двузначное число: ", cin >> number;
    if (number < 10 || number > 99) {
        cout << "Ваше число не двузначное";
        return 0;
    }
    if (number % 2 == 0) {
        cout << "Число четное - " << number << " число разделили - " << number/2;
    }
    else {
        cout << "Число нечетное - " << number;
    }
    return 0;
}
//<Саша> использует программу для определения числа

