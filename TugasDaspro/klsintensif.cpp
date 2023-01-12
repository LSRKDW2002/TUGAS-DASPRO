#include <iostream>
using namespace std;

//Kamus

//Deskripsi
int main()
{
    /*
    system("cls");
    string nama = "Lauser Kumala Dewa";
    float phi = 3.14;
    int bilbulat = 10;
    char char1 = 'Y';
    cout<<"Ini String => "<< nama <<endl;
    cout<<"Ini Float => "<<phi<<endl;
    cout<<"Ini char => "<<char1<<endl;
    cout<<"ini bilangan bulat => "<<bilbulat<<endl;

cout<<endl;
    string nama1;
    int umur;
    cout<<" Nama Saya : ";
    cin>>nama1;
    cout<<"Umur Saya : ";
    cin>>umur;
    cout<<"Nama Kamu Adalah "<<nama1<< " Dan Umur Saya "<<umur<<"Tahun"<<endl;
    

    //Luas Persegi
    float s,hasil;
    cout<<"Masukan Panjang Sisi Persegi : ";cin>>s;
    cout<<endl;
    hasil = s*s;
    cout<<"Hasil dari Luar Persegi Adalah : "<<hasil<<endl;
    

   //Luas Segitiga
   float Alas,Tinggi,hasil;
   cout<<"Masukan Panjang Alas Segitiga : ";cin>>Alas;cout<<endl;
   cout<<"Masukan Tinggi Segitiga       : ";cin>>Tinggi;cout<<endl;
   hasil = (Alas*Tinggi)/2;
   cout<<"Hasil Luas Segitiga Adalah :"<<hasil<<endl;
    

   //Luas Persegi Panjang
   float p,l,hasil;
   cout<<"Masukan Panjangnya    : ";cin>>p;
   cout<<"Masukan Lebarnya      : ";cin>>l;
   hasil=p*l;
   cout<<"Hasil Luas Persegi Panjang Adalah : "<<hasil<<endl; 
   

    string bulan ="maret";
    int umur = 9;
    if (bulan=="januari" || bulan=="maret" || bulan=="april")
    {
        if(umur<21 && umur>15)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    


   int y=5;
   int x=3;
   for(int i=2; i<=y; i++)
   {
        cout<<"Ulang i ke-"<<i<<endl;
        for (int j = 1; j < x; j++)
        {
            cout<<"Ulang j ke-"<<j<<endl;
        }
        
   }
   


    int arr[5] = {1,2,3,4,5};
    cout << arr[0]<<endl; 
    cout << arr[1]<<endl; 
    cout << arr[2]<<endl; 
    cout << arr[3]<<endl; 
    cout << arr[4]<<endl; 
*/

    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"==========================="<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}
