//Judul
//Program deteksi prodi mahasiswa

#include <iostream>
using namespace std;

//Kamus
    char NIM;
    int angka,tahun,digit;
    
//Deskripsi
int main()
{
    cout << "Fakultas Udinus Manakah Anda ?" << endl;
    cout << "Pilih Kode NIM Fakultas Anda !" << endl;
    cout << " >A11       >B11 " << endl;
    cout << " >A21       >B21 " << endl;
    cout << "======================================"<<endl;
    cout << "Masukan kode, pastikan menggunakan huruf besar :"<<endl;
    cin >> NIM >> angka;
    

    cout << "Masukan Jenjang Tahun Diterima"<<endl;
    cin >> tahun;
    cout << "Masukan 5 digit angka terakhir NIM anda : "<<endl;
    cin >> digit;

    if(NIM=='A' && angka==11)
    {
        cout<<"Maka prodi anda adalah : " <<endl;
        cout<<"FIK S1 Teknik Informatika" <<endl;
        cout<<"Maka NIM anda adalah : "; 
        cout<< NIM << angka << tahun << digit << endl;
    }
    else if(NIM=='A' && angka==21)
    {
        cout<<"Maka prodi anda adalah : " <<endl;
        cout<<"FIK D3 Manajemen Informatika" <<endl;
        cout<<"Maka NIM anda adalah : "; 
        cout << NIM << angka << tahun << digit << endl;
    }
    else if(NIM=='B' && angka==11)
    {
        cout<<"Maka prodi anda adalah : " <<endl;
        cout<<"FEB S1 Manajemen" <<endl;
        cout<<"Maka NIM anda adalah : "; 
        cout << NIM << angka << tahun << digit << endl;
    }
    else if(NIM=='B' && angka==21)
    {
        cout<<"Maka prodi anda adalah : " <<endl;
        cout<<"Feb D3 Akuntansi" <<endl;
        cout<<"Maka NIM anda adalah : "; 
        cout << NIM << angka << tahun << digit << endl;
    }
    return 0;
}
