//Judul
//Membuat program dalam Puskesmas
//Oleh Lauser Kumala Dewa

#include <iostream>
#include <string.h>
using namespace std;

//Kamus
    char nama[30];
    char umur[10];
    char alamat[50];
    char kelamin[10];
    char dokter;
    int penyakit;
    
   
//Deskripsi
int main()
{
    cout << "Selamat Datang Di Puskesmas Sumber Waras" << endl;
    cout << "Masukan Data Pasien !"<< endl;
    cout << "Masukan nama anda : "; cin.getline(nama,30);
    cout << "Masukan umur anda : "; cin.getline(umur,10);
    cout << "Masukan alamat anda : "; cin.getline(alamat,50);
    cout << "Masukan jenis kelamin anda : "; cin.getline(kelamin,10); 

    cout << endl;
    cout << "====================================" << endl;
    cout << endl;

    cout << "Pilih Dokter Yang Ingin Anda Kunjungi !"<<endl;
    cout <<" A.Dokter Anak"<<endl;
    cout <<" B.Dokter Penyakit Dalam"<<endl;
    cout <<" C.Dokter THT"<<endl;
    cout <<" D.Dokter Umum"<<endl;
    cout <<"Masukan Angka [A-D] : ";
    cin >> dokter;
  
    cout << endl;
    cout << "====================================" << endl;
    cout << endl;

         switch (dokter)
        {
            case 'A' :
            {
                cout << "Dokter Anak" << endl;
                cout << "Pilih jenis penyakit yang dialami" << endl;
                cout << "1.Demam" << endl;
                cout << "2.Diare" << endl;
                cout << "3.Batuk & Pilek" << endl;
                cout << "masukan kode [1-3] : ";                        
                cin >> penyakit;

                cout << endl;
                cout << "====================================" << endl;
                cout << endl;

                    switch (penyakit)
                    {
                        case 1 :
                            {
                                cout << "Demam" << endl;
                                cout << "Resep Obat Dari Dokter : " << endl;
                                cout << "Paracetamol 3x1 sendok teh"<<endl;
                            }
                        case 2 :
                            {
                                 cout << "Diare" << endl;
                                 cout << "Resep Obat Dari Dokter : " << endl;
                                 cout << "Entrostop Anak 10ml"<<endl;
                                break;
                            }
                        case 3 :
                            {
                                cout << "Batuk & Pilek" << endl;
                                cout << "Resep Obat Dari Dokter : " << endl;
                                cout << "Hufagrip Flu & Batuk = " <<endl;
                                cout << "3x1, 6-12 tahun: 2 sendok takar 10 ml" << endl;
                                cout << "3x1, 2-6 tahun: 1 sendok takar 5 ml"<<endl;
                                break;
                            }
                        default  :
                            {
                                cout << "Tidak Ada"<<endl;
                                break;
                            }
                    }
                break;
            }
            case 'B' :
            {
                cout << "Dokter Penyakit Dalam" << endl;
                cout << "Pilih jenis penyakit yang dialami" << endl;
                cout << "4.Diabetes" << endl;
                cout << "5.Sesak Napas" << endl;
                cout << "6.Anemia" << endl;
                cout << "7.Asam Lambung" << endl;
                cout << "masukan kode [4-7] : ";
                cin >> penyakit;

                cout << endl;
                cout << "====================================" << endl;
                cout << endl;

                    switch (penyakit)
                    {
                        case 4 :
                            {
                                cout << "Diabetes" << endl;
                                cout << "Resep Obat Dari Dokter : " << endl;
                                cout << "Metformin 500mg"<<endl;
                                break;
                            }
                        case 5 :
                            {
                                cout << "Sesak Napas" << endl;
                                cout << "Resep Obat Dari Dokter : " << endl;
                                cout << "Deksametason 0,5mg"<<endl;
                                break;
                            }
                        case 6 :
                            {
                                cout << "Anemia" << endl;
                                cout << "Resep Obat Dari Dokter : "<< endl;
                                cout << "Sangobion Tablet"<<endl;
                                break;
                            }
                        case 7 :
                            {
                                cout << "Asam Lambung"<<endl;
                                cout << "Resep Obat Dari Dokter : "<<endl;
                                cout << "Antasida"<<endl;
                                break;
                            }
                        default :
                            {
                                cout << "Tidak Ada"<<endl;
                                break;
                            }
                    }
                break;
            }
            case 'C' :
            {
                cout << "Dokter THT" << endl;
                cout << "Pilih jenis penyakit yang dialami !" << endl;
                cout << "8.Sinusitis" << endl;
                cout << "9.Radang Tenggorokan" << endl;
                cout << "10.Tidur Mendengkur atau Ngorok" << endl;
                cout << "masukan kode [8-10] : ";
                cin >> penyakit;

                cout << endl;
                cout << "====================================" << endl;
                cout << endl;

                    switch (penyakit)
                    {
                        case 8 :
                            { 
                                cout << "Sinusitis" << endl;
                                cout << "Resep Obat Dari Dokter :" << endl;
                                cout << "Obat Pseudoephedrine : Actifed, Decolsin, atau Paramex Flu & Batuk"<<endl;
                                break;
                            }
                        case 9 :
                            {
                                cout << "Radang Tenggorokan"<< endl;
                                cout << "Resep Obat Dari Dokter :" << endl;
                                cout << "Amoxicillin atau Cefixime"<<endl;
                                break;
                            }
                        case 10 :
                            {
                                cout << "Tidur Mendengkur atau Ngorok"<< endl;
                                cout << "Solusi Dari Dokter" << endl;
                                cout << "1.Kurangi Merokok (jika merokok),"<<endl;
                                cout << "2.Jangan Konsumsi Alkohol,"<<endl;
                                cout << "3.Olahraga Teratur."<<endl;
                                break;
                            }
                        default :
                            {
                                cout << "Tidak Ada"<<endl;
                                break;
                            }
                    }
                break;
            }
            case 'D' :
            {
                cout << "Dokter Umum" << endl;
                cout << "Pilih jenis penyakit yang dialami !" << endl;
                cout << "11.Migrain atau Sakit Kepala" << endl;
                cout << "12.Kolesterol" << endl;
                cout << "13.Nyeri Otot" << endl;
                cout << "14.Asam Urat" << endl;
                cout << "masukan kode [11-14] : ";
                cin >> penyakit;

                cout << endl;
                cout << "====================================" << endl;
                cout << endl;
                
                    switch (penyakit)
                    {
                        case 11 :
                            {
                                cout << "Migrain atau Sakit Kepala"<< endl;
                                cout << "Resep Obat Dari Dokter :" << endl;
                                cout << "Aspirin, Paracetamol, atau Ibuprofen."<<endl;
                                break;
                            }
                        case 12 :
                            {
                                cout << "Kolesterol" << endl;
                                cout << "Resep Obat Dari Dokter :" <<endl;
                                cout << "1.Pravastatin Novell 20 mg,"<<endl;
                                cout << "2.Simvastatin 20 mg."<<endl;
                                break;
                            }
                        case 13 :
                            {
                                cout << "Nyeri Otot" << endl;
                                cout << "Resep Obat Dari Dokter :"<<endl;
                                cout << "1.Oskadon SP,"<<endl;
                                cout << "2.NEO Rheumacyl atau"<<endl;
                                cout << "3.Eperisone HCl 50mg."<<endl;
                                break;
                            }
                        case 14 :
                            {
                                cout << "Asam Urat"<<endl;
                                cout << "Resep Obat Dari Dokter :"<<endl;
                                cout << "Allopurinol Tablet 300mg"<<endl;
                                break;
                            }
                        default :
                            {
                                cout << "Tidak Ada"<<endl;
                                break;
                            }
                    }
                break;
            }
            default  :
            {
                cout << "Tidak ada"<<endl;                    
                break;
            }
        } 
    cout<<endl;
    cout<<"Terima Kasih Atas Kunjungan Anda di Puskesmas Sumber Waras"<<endl;
    return 0;
}    