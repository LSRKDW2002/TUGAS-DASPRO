//Judul
//Membuat program menjumlahkan 2 angka
//14 Sept 2022
//Oleh Lauser Kumala Dewa

#include <iostream>
using namespace std;

//Kamus
    int x, y, hasil;

//Deskripsi
main()
{
   cout << "Membuat program menjumlahkan 2 angka" << endl;
   cout << "Masukan variabel x : ";cin >> x;
   cout << "Masukan variabel y : " ;cin >> y;
   hasil = x+y;
   cout << "Hasil dari penjumlahan variabel tersebut adalah : " <<(x+y)<< endl;
   if (hasil > 0)
   {
        cout << "bilangan positif";
   }
   else
    {
        cout << "bilangan negatif";
    }
    return 0;
}
