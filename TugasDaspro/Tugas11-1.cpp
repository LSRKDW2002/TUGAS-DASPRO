//Judul
//Membuat program deteksi penyakit dalam Puskesmas
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
    char lagi;
    int penyakit;
    
   
//Deskripsi
int main()
{
awal:
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "       Selamat Datang Di Puskesmas Sumber Waras" << endl;
    cout << "           Masukan Data Pasien !"<< endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "Masukan nama anda : "; cin.ignore();cin.getline(nama,30);
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
                cout << "Pilih gejala penyakit yang dialami" << endl;
                cout << "1.Keringat Dingin, Menggigil, Muntah-Muntah" << endl;
                cout << "2.Nyeri Perut, Mual & Muntah, Feses lembek & cair" << endl;
                cout << "3.Sulit bernapas,mengeluarkan dahak, bersin atau pilek" << endl;
                cout << "masukan kode [1-3] : ";                        
                cin >> penyakit;

                cout << endl;
                cout << "====================================" << endl;
                cout << endl;

                    switch (penyakit)
                    {
                        case 1 :
                            {
                                cout << "Anak anda mengalami demam" << endl;
                                cout << "Resep Obat Dari Dokter : " << endl;
                                cout << "Paracetamol 3x1 sendok teh"<<endl;
                                break;
                            }
                        case 2 :
                            {
                                 cout << "Anak anda mengalami diare" << endl;
                                 cout << "Resep Obat Dari Dokter : " << endl;
                                 cout << "Entrostop Anak 10ml"<<endl;
                                break;
                            }
                        case 3 :
                            {
                                cout << "Anak anda mengalami Batuk & Pilek" << endl;
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
                cout << "Pilih gejala penyakit yang dialami !" << endl;
                cout << "8.Hidung mampet yang menyebabkan kesulitan bernapas, Nyeri wajah yang memburuk saat menunduk, Bau napas tidak sedap." << endl;
                cout << "9.Tenggorokan terasa sakit saat menelan,batuk yang mengganggu, rasa tidak nyaman saat berbicara." << endl;
                cout << "10.Pusing atau sakit kepala ketika bangun,Nyeri tenggorokan ketika bangun,Sering merasa tidak cukup tidur" << endl;
                cout << "masukan kode [8-10] : ";
                cin >> penyakit;

                cout << endl;
                cout << "====================================" << endl;
                cout << endl;

                    switch (penyakit)
                    {
                        case 8 :
                            { 
                                cout << "Anda mengalami sinusitis" << endl;
                                cout << "Resep Obat Dari Dokter :" << endl;
                                cout << "Obat Pseudoephedrine : Actifed, Decolsin, atau Paramex Flu & Batuk"<<endl;
                                break;
                            }
                        case 9 :
                            {
                                cout << "Anda mengalami Radang Tenggorokan"<< endl;
                                cout << "Resep Obat Dari Dokter :" << endl;
                                cout << "Amoxicillin atau Cefixime"<<endl;
                                break;
                            }
                        case 10 :
                            {
                                cout << "Anda mengalami Tidur Mendengkur atau Ngorok"<< endl;
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
                cout << "11.Rasa sakit, terjadi bertahap dari ringan hingga berdenyut, dan diperburuk oleh cahaya, bersin, mengejan, gerakan konstan, menggerakkan kepala dengan cepat, atau aktivitas fisik. Pada '60-70%' penderita rasa sakit hanya terjadi pada satu sisi kepala." << endl;
                cout << "12.Mudah Mengantuk,Sering merasakan kesemutan,Pegal pada Tengkuk atau Pundak" << endl;
                cout << "13.Rasa sakit yang tumpul atau tajam,Muncul ruam, kemerahan, dan pembengkakan pada area tubuh yang nyeri,Nyeri sendi yang berhubungan dengan nyeri otot" << endl;
                cout << "14.Sendi mendadak terasa sangat sakit,Kesulitan untuk berjalan akibat sakit yang mengganggu." << endl;
                cout << "masukan kode [11-14] : ";
                cin >> penyakit;

                cout << endl;
                cout << "====================================" << endl;
                cout << endl;
                
                    switch (penyakit)
                    {
                        case 11 :
                            {
                                cout << "Anda mengalami Migrain atau Sakit Kepala"<< endl;
                                cout << "Resep Obat Dari Dokter :" << endl;
                                cout << "Aspirin, Paracetamol, atau Ibuprofen."<<endl;
                                break;
                            }
                        case 12 :
                            {
                                cout << "Anda mengalami Kolesterol" << endl;
                                cout << "Resep Obat Dari Dokter :" <<endl;
                                cout << "1.Pravastatin Novell 20 mg,"<<endl;
                                cout << "2.Simvastatin 20 mg."<<endl;
                                break;
                            }
                        case 13 :
                            {
                                cout << "Anda mengalami Nyeri Otot" << endl;
                                cout << "Resep Obat Dari Dokter :"<<endl;
                                cout << "1.Oskadon SP,"<<endl;
                                cout << "2.NEO Rheumacyl atau"<<endl;
                                cout << "3.Eperisone HCl 50mg."<<endl;
                                break;
                            }
                        case 14 :
                            {
                                cout << "Anda mengalami Asam Urat"<<endl;
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
    cout<<"Ingin Mengulangi Lagi (Y/T)?";
    cin>>lagi;
        if(lagi=='y' || lagi=='Y'){
            goto awal;
        }
        if(lagi=='t' || lagi=='T'){
                goto selesai;
        }
    selesai:
    cout<<"Terima Kasih Atas Kunjungan Anda di Puskesmas Sumber Waras"<<endl;
    return 0;
}    