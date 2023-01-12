//Judul
//Looping kelipatan 6 (0-100)
//Oleh Lauser Kumala Dewa

//Kamus
#include <iostream>
using namespace std;
int a;
int b;

//Deskripsi
int main()
{
    cout << "Looping bilangan kelipatan 6 Dari 0-100 ! " << endl;
    a = 1;
    while (a>=1)
    {
        b = 0;
        do
        {
            cout << b;
            cout << " ";
            b = b + 6;
        } while (b < 100);
    a = a - 1;
    cout << endl;
    }
    return 0;
}