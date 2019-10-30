//program: cin.cpp
#include <iostream>
using namespace std;

int main()
{
    double panjang, lebar, keliling;

    cout << "Menghitung keliling persegi panjang" << endl;

    cout << "Panjang: ";
    cin >> panjang;

    cout << "Lebar: ";
    cin >> lebar;

    keliling = 2 * (panjang + lebar);

    cout << "Keliling = " << keliling << endl;

    return 0;
}
