//judul
//menentukan jenis segitiga
//Lauser Kumala Dewa
//A11.2022.14363

#include <iostream>
using namespace std;

//kamus
	int AL,TI,MR;

//deskripsi
int main()
{
    cout <<"Berikan panjang alasnya: ";
    cin >> AL;

    cout <<"Berikan panjang tingginya : ";
    cin >> TI;

    cout <<"Berikan panjang sisi miringnya : ";
    cin >> MR;

    if(AL==TI && AL==MR)
    {
        cout<<"Segitiga sama sisi"<<endl;
    }
    else if(TI==MR)
    {
        cout << "Segitiga Sama Kaki" <<endl;
    }
    else
    cout<<"Segitiga sembarang"<<endl;

    return 0;

}
