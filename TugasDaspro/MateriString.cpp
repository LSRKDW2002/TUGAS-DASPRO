// judul : mencoba inputan type data string 
// author : bon jovi 
// 17 sepr 2022

#include <iostream> 
using namespace std; 

// kamus
char roti[20]; // type data string
char biskuit; // type data character 

//diskripsi
int main() {
cout << "masukkan namamu "; cin >> roti;
cout << "owww kamu si " << roti << " thoo, pie kabare " << endl; cout << "jenis kelamin mu [ L / P ] : "; cin >> biskuit;
cout << "ok jenis kelaminmu " << biskuit << endl;
return 0;
}