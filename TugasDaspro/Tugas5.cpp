//Judul
//Tugas 5 - Program Sederhana
//Oleh Lauser Kumala Dewa

#include <iostream>
using namespace std;

//Kamus
string nama;
string nim;
string fakultas;
string jurusan;
string gender;
string alamat;
string agama;
string status;

//deskripsi
 int main()
{
    cout << "Membuat Program Sederhana Input-Output" << endl;
    cout << "Masukan Nama       :";getline (cin, nama);
    cout << "Masukan NIM        :";getline (cin,nim);
    cout << "Masukan Fakultas   :";getline (cin,fakultas);
    cout << "Masukan Jurusan    :";getline (cin,jurusan);
    cout << "Masukan Gender     :";getline (cin,gender);
    cout << "Masukan Alamat     :";getline (cin,alamat);
    cout << "Masukan Agama      :";getline (cin,agama);
    cout << "Masukan Status     :";getline (cin,status);

    cout << endl;
    cout << "DATA MAHASISWA UNIVERSITAS DIAN NUSWANTORO"<<endl;
    cout << "-------------------------------"<< endl;

    cout << "Nama           : "<<nama<<endl;
    cout << "NIM            : "<<nim<<endl;
    cout << "Fakultas       : "<<fakultas<<endl;
    cout << "Jurusan        : "<<jurusan<<endl;
    cout << "Gender         : "<<gender<<endl;
    cout << "Alamat         : "<<alamat<<endl;
    cout << "Agama          : "<<agama<<endl;
    cout << "Status         : "<<status<<endl;

    return 0;
}