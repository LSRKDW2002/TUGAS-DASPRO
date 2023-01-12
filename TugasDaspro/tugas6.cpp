//Judul
//Program Perhitungan Aritmatika
//Oleh Lauser Kumala Dewa

#include <iostream>
using namespace std;

//Kamus
int bil1, bil2, bil3, bil4, bil5, bil6, bil7, bil8;
float hasil1, hasil2, hasil3, hasil4;

//Deskripsi
int main()
{
   cout<<" a.)Sistem operasi perkalian pada dua buah bilangan"<<endl;
   cout<<"Masukan bilangannya"<<endl;
   cin>>bil1;
   cin>>bil2;
   hasil1 = (bil1*bil2);
    cout<<"Hasil kali kedua bilangan tersebut adalah : "<< hasil1 << endl ;
   cout<<" b.)Sistem operasi pembagian pada dua buah bilangan"<<endl;
   cout<<"Masukan bilangannya : "<<endl;
   cin>>bil3;
   cin>>bil4;
   hasil2 = (bil3/bil4);
    cout<<"Hasil bagi kedua bilangan tersebut adalah : "<< hasil2 << endl;
   cout<<" c.)Sistem operasi pengurangan pada dua buah bilangan"<<endl;
   cout<<"Masukan bilangannya"<<endl;
   cin>>bil5;
   cin>>bil6;
   hasil3 = (bil5-bil6);
    cout<<"Hasil pengurangan kedua bilangan tersebut adalah : "<< hasil3 << endl;
   cout<<"d.)Sistem operasi penjumlahan pada dua buah bilangan"<<endl;
   cout<<"Masukan bilangannya"<<endl;
   cin>>bil7;
   cin>>bil8;
   hasil4 = (bil7+bil8);
    cout<<"Hasil penjumlahan bilangan tersebut adalah : "<< hasil4 << endl;
    if((bil7+bil8) % 2==0){
        cout<<hasil4<<"Adalah bilangan genap"<<endl;
    }else{
        cout<<hasil4<<"Adalah bilangan ganjil"<<endl;
    }
    return 0;
}
