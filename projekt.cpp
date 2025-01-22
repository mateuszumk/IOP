#include <iostream>
using namespace std;

bool czy_pierwsza(int liczba) {
    if (liczba < 2) return false;
    for (int i = 2; i * i <= liczba; ++i) {
        if (liczba % i == 0) return false;
    }
    return true;
}

int main() {
    int liczba;
    cin >> liczba;
    cout << "Podano liczbe: " << liczba << endl;
    if (czy_pierwsza(liczba)) {
        cout << liczba << " jest liczba pierwsza" << endl;
    } else {
        cout << liczba << " nie jest liczba pierwsza" << endl;
    }
    return 0;
}

