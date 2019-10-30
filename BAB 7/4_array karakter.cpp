#include <iostream>
using namespace std;

int main()
{
    char NAMAKU [6] = {'H', 'A', 'S', 'Y', 'A', '\0'};
    char NAMAMU [6] = "TASYA";

    for (int C=0; C<6; C++)
    {
        cout << NAMAKU [C];
    }
    cout << endl;

    cout << NAMAMU;

    cout << endl << endl;

    cout << "Jumlah Elemen NAMAKU : " << sizeof (NAMAKU) << endl;

    cout << "Jumlah Elemen NAMAKU : " << sizeof (NAMAMU) << endl << endl;

    return 0;
}
