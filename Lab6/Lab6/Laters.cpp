#include "Laters.h";
using namespace std;
void Laters(int c) {
    int s;
    s = c + 32;
    cout << "код символа " << (int)c <<
        " и код строчной: " << s << endl <<
        "Разность " << s - c << endl;
}

void Laters1(int c) {
    int s;
    s = c - 32;
    cout << "код символа " << (int)c <<
        " и код строчной: " << s << endl <<
        "Разность " << c - s << endl;
}