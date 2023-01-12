//Judul
//simulasi depend on

#include <iostream>
#include <string.h>
using namespace std;

//Kamus
    char KodeFAK;
    int KodePRODI;
//Deskripsi
int main()
{
    cout << "KODE Fakultas UDN" << endl;
    cout << "masukan kode [A-E] : ";
    cin >> KodeFAK;

    switch (KodeFAK)
    {
        case 'A' :
            {
                cout << "Fasilkom" << endl;
                cout << "Pilih program studi" << endl;
                cout << "masukan kode [1-6] : ";
                cin >> KodePRODI;
                    switch (KodePRODI)
                        {
                        case 1 :
                            {
                                cout << "TI";
                                break;
                            }
                        case 2 :
                            {
                                cout << "SI";
                                break;
                            }
                        case 3 :
                            {
                                cout << "DKV";
                                break;
                            }
                        case 4 :
                            {
                                cout << "ILKOM";
                                break;
                            }
                        case 5 :
                            {
                                cout << "FTV";
                                break;
                            }
                        case 6 :
                            {
                                cout << "Animasi";
                                break;
                            }
                        default  :
                            {
                                cout << "Tidak Ada";
                                break;
                            }
                        }
                    break;
            }
        case 'B' :
            {
                cout << "FEB";
                cout << "Pilih program studi" << endl;
                cout << "masukan kode [1-2] : ";
                cin >> KodePRODI;
                    switch (KodePRODI)
                     {
                        case 1 :
                            {
                                cout << "Manajemen";
                                break;
                            }
                        case 2 :
                            {
                                cout << "Akuntansi";
                                break;
                            }
                     }
                break;
            }
        case 'C' :
            {
                cout << "FIB";
                break;
            }
        case 'D' :
            {
                cout << "FKes";
                break;
                }
        case 'E' :
            {
                cout << "FT";
                break;
            }
        default  :
            {
                cout << "Tidak ada";
                break;
            }
    }
    return 0;
}
