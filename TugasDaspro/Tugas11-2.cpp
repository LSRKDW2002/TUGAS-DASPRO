//Judul
//Membuat program input krs
//Lauser Kumala Dewa
//A11.2022.14363

#include <iostream>
using namespace std;

//Kamus
char nama[40];
char nim[20];
char prodi[20];
char smt[15];
char fak[20];
char dos[30];
char makul[20];
char lagi;
int jml;
int nilai1, nilai2, nilai3, nilai4, nilai5, nilai6;
int sks1, sks2, sks3, sks4, sks5, sks6;
int thn;

//Deskripsi
int main()
{
    awal:
    cout<<"                    KARTU HASIL STUDI"<<endl;
    cout<<"             PROGRAM STUDI TEKNIK INFORMATIKA"<<endl;
    cout<<"                UNIVERSITAS DIAN NUSWANTORO"<<endl;

    cout<<endl;

    cout<<"NIM      : ";cin.ignore();cin.getline(nim,20);
    cout<<"NAMA     : ";cin.getline(nama,40);  
    cout<<"PRODI    : ";cin.getline(prodi,20);
    cout<<"Fakultas : ";cin.getline(fak,20);
    cout<<"Semester : ";cin.getline(smt,15);
    cout<<"DosWal   : ";cin.getline(dos,30);
    
    
    cout<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<endl;
    cout<<"Masukan Jumlah Mata Kuliah Anda : ";
    cin>>jml;
        switch (jml)
        {
            case 1 :
            {
                cout<<"1.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks1;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai1;
                cout<<endl;
                cout<<"Total SKS        : "<<(sks1)<<endl;
                cout<<"Total NILAI      : "<<(nilai1)<<endl;
                cout<<"RATA-RATA NILAI  : "<<(nilai1/jml)<<endl;
                break;
            }
            case 2 :
            {
                cout<<"1.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks1;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai1;cout<<endl;
                cout<<endl;
                cout<<"2.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks2;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai2;
                cout<<endl;
                cout<<"Total SKS        : "<<(sks1+sks2)<<endl;
                cout<<"Total NILAI      : "<<(nilai1+nilai2)<<endl;
                cout<<"RATA-RATA NILAI  : "<<((nilai1+nilai2)/jml)<<endl;
                break;   
            }
            case 3 :
            {
                cout<<"1.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks1;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai1;cout<<endl;
                cout<<endl;
                cout<<"2.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks2;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai2;
                cout<<endl;
                cout<<"3.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks3;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai3;
                cout<<endl;
                cout<<"Total SKS        : "<<(sks1+sks2+sks3)<<endl;
                cout<<"Total NILAI      : "<<(nilai1+nilai2+nilai3)<<endl;
                cout<<"RATA-RATA NILAI  : "<<((nilai1+nilai2+nilai3)/jml)<<endl;
                break;   
            }
            case 4 :
            {
                cout<<"1.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks1;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai1;cout<<endl;
                cout<<endl;
                cout<<"2.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks2;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai2;
                cout<<endl;
                cout<<"3.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks3;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai3;
                cout<<endl;
                cout<<"4.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks4;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai4;
                cout<<endl;
                cout<<"Total SKS        : "<<(sks1+sks2+sks3+sks4)<<endl;
                cout<<"Total NILAI      : "<<(nilai1+nilai2+nilai3+nilai4)<<endl;
                cout<<"RATA-RATA NILAI  : "<<((nilai1+nilai2+nilai3+nilai4)/jml)<<endl;
                break;
            }
            case 5 :
            {
                cout<<"1.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks1;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai1;cout<<endl;
                cout<<endl;
                cout<<"2.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks2;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai2;
                cout<<endl;
                cout<<"3.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks3;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai3;
                cout<<endl;
                cout<<"4.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks4;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai4;
                cout<<endl;
                cout<<"5.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks5;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai5;
                cout<<endl;
                cout<<"Total SKS        : "<<(sks1+sks2+sks3+sks4+sks5)<<endl;
                cout<<"Total NILAI      : "<<(nilai1+nilai2+nilai3+nilai4+nilai5)<<endl;
                cout<<"RATA-RATA NILAI  : "<<((nilai1+nilai2+nilai3+nilai4+nilai5)/jml)<<endl;
                break;
            }
            case 6 :
            {
                cout<<"1.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks1;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai1;cout<<endl;
                cout<<endl;
                cout<<"2.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks2;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai2;
                cout<<endl;
                cout<<"3.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks3;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai3;
                cout<<endl;
                cout<<"4.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks4;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai4;
                cout<<endl;
                cout<<"5.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks5;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai5;
                cout<<endl;
                cout<<"6.Mata Kuliah    : ";cin.ignore();cin.getline(makul,20);cout<<endl;
                cout<<"  SKS            : ";cin>>sks6;cout<<endl;
                cout<<"  Nilai          : ";cin>>nilai6;
                cout<<endl;
                cout<<"Total SKS        : "<<(sks1+sks2+sks3+sks4+sks5+sks6)<<endl;
                cout<<"Total NILAI      : "<<(nilai1+nilai2+nilai3+nilai4+nilai5+nilai6)<<endl;
                cout<<"RATA-RATA NILAI  : "<<((nilai1+nilai2+nilai3+nilai4+nilai5+nilai6)/jml)<<endl;
                break;
            }
            default :
            {
                cout<<"Tidak Ada"<<endl;
                break;
            }
            
        }
    cout<<endl;
    cout<<"Ingin Mengulangi Lagi (Y/T)?";
    cin>>lagi;
        if(lagi=='y' || lagi=='Y'){
            goto awal;
        }
        if(lagi=='t' || lagi=='T'){
                goto selesai;
        }
    selesai:
    return 0;
}
