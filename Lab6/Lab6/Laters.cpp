#include "Laters.h";
using namespace std;
void Laters(int c) {
    int s;
    s = c + 32;
    cout << "��� ������� " << (int)c <<
        " � ��� ��������: " << s << endl <<
        "�������� " << s - c << endl;
}

void Laters1(int c) {
    int s;
    s = c - 32;
    cout << "��� ������� " << (int)c <<
        " � ��� ��������: " << s << endl <<
        "�������� " << c - s << endl;
}