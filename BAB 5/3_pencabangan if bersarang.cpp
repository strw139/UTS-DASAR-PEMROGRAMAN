#include <iostream>
using namespace std;

int main()
{
    double Nilai_Ujian;
    char Indeks;

    cout << "KONVERSI NILAI SISWA \n \n";
    cout << "Masukan Nilai Ujian : ";
    cin >> Nilai_Ujian;

    if(Nilai_Ujian>=85){Indeks = 'A';}
    else
    if(Nilai_Ujian>=75){Indeks = 'B';}
    else
    if(Nilai_Ujian>=55){Indeks = 'C';}
    else
    if(Nilai_Ujian>=40){Indeks = 'D';}
    else{Indeks = 'E';}
    cout << "Indeks Siswa = " << Indeks << endl;

    return 0;
}
