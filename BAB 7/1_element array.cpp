#include <iostream>
using namespace std;

int main()
{
    int Nama_Array[10];
    cout << "Masukan nilai pada : " << endl;
    for (int C=0; C<10; C++)
    {
        cout << " Elemen [" << C << "] = ";
        cin >> Nama_Array [C];
    }
    cout << "\n";

    cout << " Tampilkan nilai yang di masukkan : " << endl;
    for (int D = 0; D<10; D++)
    {
        cout << " Nilai yang terdapat pada elemen ke ";
        cout << D+1 << " = " << Nama_Array[D] << endl;
    }
    cout << "\n";

    return 0;
}
