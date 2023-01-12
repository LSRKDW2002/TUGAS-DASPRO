//judul 
//latihan string

#include <iostream> 
using namespace std; 

//kamus
    char nama[30]; 
    char alamat[50]; 
    char nomer[20];
    char email[50];
    
//diskripsi
int main() 
{
    cout << "Masukan nama teman anda : "; cin.getline(nama,30);
    cout << "Masukan alamatnya : "; cin.getline(alamat,50) ;
    cout << "Masukan Nomer HPnya : "; cin.getline(nomer,20);
    cout << "Masukan alamat emailnya : "; cin.getline(email,50);
    cout << endl;
    
    cout << "Ow ternyata beliau itu " << nama << " yang alamatnya di " << alamat <<endl;
    cout << "Beneran ?"<<endl;
    cout << "Yang nomer HPnya " << nomer;
    cout << endl;
    cout << "Aku sering diberi berita keren lewat email "<< email<< endl;
    return 0;
}