//Judul
//Program Menghitung Lama Belajar
//Oleh Lauser Kumala Dewa

#include <iostream>
using namespace std;

//Kamus
    int jaw,jak,maw,mak,daw,dak;

//Deskripsi
int main()
{
    cout<<"===========Menghitung Waktu Lama Belajar==========="<<endl;
    cout<<"Masukan Waktu Anda Belajar!" << endl;
    cin>>jaw; 
    cin>>maw;
    cin>>daw; 
    cout<<"Waktu dimulai belajar : "<<jaw<<":"<<maw<<":"<<daw<<endl;

    cout<<"--------------------------------"<<endl;

    cout<<"Masukan Waktu Anda Selesai Belajar!"<<endl;
    cin>>jak;
    cin>>mak;
    cin>>dak;
    cout<<"Waktu berakhir belajar : "<<jak<<":"<<mak<<":"<<dak<<endl;

    cout<<"--------------------------------"<<endl;

    
    cout<<"Lama waktu saya belajar adalah : "<<jak-jaw<<"jam "<<mak-maw<<"menit "<<dak-daw<<"detik"<<endl;
    cout<<"Tetap semangat, Coding itu menyenangkan!"<<endl;
    return 0;
}
