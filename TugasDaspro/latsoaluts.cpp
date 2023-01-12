#include <iostream>
using namespace std;

//Kamus 
int bilangan;
int a, b, i;
//dekripsi
int main()
{
    /*cout << "Masukan sebuah bilangan : ";
    cin >> bilangan;
    if(bilangan > 0){
        cout << "Bilangan Positif";
    }else if (bilangan < 0){
        cout << "Bilangan Negatif";
    }else{
        cout << " - ";
    }

    a = 18;
    b = 0;
    do
    { 
        a = a - 2;
        b = b + 2;
        cout << " ";
        cout << b;
        cout << " ";
        cout << a;
    }while(a >2 && b < 16);
    cout << endl;

    a = 0;
    b = 10;
    while(a <=24 && b >=0)
    {
        a = a + 2;
        b = b - 1;
        cout << " ";
        cout << a;
        cout << " ";
        cout << b;
    }*/

    i = 4;
    do
    {
        a = 2;
        b = 9;
        while (a<=24 && b>=-1)
        {
            cout << a << " " << b << " ";
            a = a + 2;
            b = b - 1;
        }
        cout << endl;
        i = i - 1;
    } while (i>0);
    return 0;
}