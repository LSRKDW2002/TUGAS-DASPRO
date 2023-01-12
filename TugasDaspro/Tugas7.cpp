//Judul
//Mmebuat program mengurutkan 5 variabel terbesar ke terkecil
//By : Lauser Kumala Dewa

#include <iostream>
using namespace std;

//Kamus
int a,b,c,d,e;

//Deskripsi
int main()
{
    cout << "Silahkan Masukkan 5 Nilai !"<<endl;
    cout << "Masukan nilai pertama      : ";
    cin >> a;
    cout << "Masukan nilai kedua        : ";
    cin >> b;
    cout << "Masukan nilai ketiga       : ";
    cin >> c;
    cout << "Masukan nilai keempat      : ";
    cin >> d;
    cout << "Masukan nilai kelima       : ";
    cin >> e;
    cout << "================================================" << endl;
    if (a>b && b>c && c>d && d>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,b,c,d,e";
    }
    else
    if (a>b && b>c && c>e && e>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,b,c,e,d";
    }
    else
    if (a>b && b>d && d>c && c>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,b,d,c,e";
    }
    else
    if (a>b && b>d && d>e && e>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,b,d,e,c";
    }
    else
    if (a>b && b>e && e>c && c>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,b,e,c,d";
    }
    else
    if (a>b && b>e && e>d && d>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,b,e,d,c";
    }
    else
    if(a>c && c>b && b>d && d>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,c,b,d,e";
    }
    else
    if(a>c && c>b && b>e && e>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,c,b,e,d";
    }
    else
    if(a>c && c>d && d>b && b>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,c,d,b,e";
    }
    else
    if(a>c && c>d && d>e && e>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,c,d,e,b";
    }
    else
    if(a>c && c>e && e>b && b>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,c,e,b,d";
    }
    else
    if(a>c && c>e && e>d && d>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,c,e,d,b";
    }
    else
    if(a>d && d>b && b>c && c>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,d,b,c,e";
    }
    else
    if(a>d && d>b && b>e && e>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,d,b,e,c";
    }
    else
    if(a>d && d>c && c>b && b>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,d,c,b,e";
    }
    else
    if(a>d && d>c && c>e && e>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,d,c,e,b";
    }
    else
    if(a>d && d>e && e>b && b>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,d,e,b,c";
    }
    else
    if(a>d && d>e && e>c && c>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,d,e,c,b";
    }
    else
    if(a>e && e>b && b>c && c>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,e,b,c,d";
    }
    else
    if(a>e && e>b && b>d && d>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,e,b,d,c";
    }
    else
    if(a>e && e>c && c>b && b>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,e,c,b,d";
    }
    else
    if(a>e && e>c && c>d && d>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,e,c,d,b";
    }
    else
    if(a>e && e>d && d>b && b>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,e,d,b,c";
    }
    else
    if(a>e && e>d && d>c && c>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"a,e,d,c,b";
    }
    else
    if(b>a && a>b && b>c && c>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,b,c,e";
    }
    else
    if(b>a && a>b && b>e && e>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,b,e,c";
    }
    else
    if(b>a && a>c && c>d && d>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,c,d,e";
    }
    else
    if(b>a && a>c && c>e && e>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,c,e,d";
    }
    else
    if(b>a && a>d && d>c && c>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,d,c,e";
    }
    else
    if(b>a && a>d && d>e && e>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,d,e,c";
    }
    else
    if(b>a && a>e && e>b && b>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,e,b,c";
    }
    else
    if(b>a && a>e && e>c && c>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,e,c,d";
    }
    else
    if(b>a && a>e && e>d && d>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,a,e,d,c";
    }
    else
    if(b>c && c>a && a>d && d>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,c,a,d,e";
    }
    else
    if(b>c && c>a && a>e && e>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,c,a,e,d";
    }
    else
    if(b>c && c>d && d>a && a>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,c,d,a,e";
    }
    else
    if(b>c && c>d && d>e && e>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,c,d,e,a";
    }
    else
    if(b>c && c>e && e>a && a>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,c,e,a,d";
    }
    else
    if(b>c && c>e && e>d && d>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,c,e,d,a";
    }
    else
    if(b>d && d>a && a>c && c>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,d,a,c,e";
    }
    else
    if(b>d && d>a && a>e && e>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,d,a,e,c";
    }
    else
    if(b>d && d>c && c>a && a>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,d,c,a,e";
    }
    else
    if(b>d && d>c && c>e && e>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,d,c,e,a";
    }
    else
    if(b>d && d>e && e>a && a>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,d,e,a,c";
    }
    else
    if(b>d && d>e && e>c && c>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,d,c,a,e";
    }
    else
    if(b>e && e>a && a>b && b>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,e,a,b,c";
    }
    else
    if(b>e && e>a && a>c && c>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,e,a,c,d";
    }
    else
    if(b>e && e>a && a>d && d>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,e,a,d,c";
    }
    else
    if(b>e && e>c && c>a && a>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,e,c,a,d";
    }
    else
    if(b>e && e>c && c>d && d>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,e,c,d,a";
    }
    else
    if(b>e && e>d && d>a && a>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,e,d,a,c";
    }
    else
    if(b>e && e>d && d>c && c>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"b,e,d,c,a";
    }
    else
    if(c>a && a>b && b>d && d>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,a,b,d,e";
    }
    else
    if(c>a && a>b && b>e && e>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,a,b,e,d";
    }
    else
    if(c>a && a>d && d>b && b>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,a,d,b,e";
    }
    else
    if(c>a && a>d && d>e && e>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,a,d,e,b";
    }
    else
    if(c>a && a>e && e>b && b>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,a,e,b,d";
    }
    else
    if(c>a && a>e && e>d && d>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,a,e,d,b";
    }
    else
    if(c>b && b>a && a>d && d>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,b,a,d,e";
    }
    else
    if(c>b && b>a && a>e && e>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,b,a,e,d";
    }
    else
    if(c>b && b>d && d>a && a>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,b,d,a,e";
    }
    else
    if(c>b && b>d && d>e && e>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,b,d,e,a";
    }
    else
    if(c>b && b>e && e>a && a>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,b,e,a,d";
    }
    else
    if(c>b && b>e && e>d && d>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,b,e,d,a";
    }
    else
    if(c>d && d>a && a>b && b>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,d,a,b,e";
    }
    else
    if(c>d && d>a && a>e && e>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,d,a,e,b";
    }
    else
    if(c>d && d>b && b>a && a>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,d,b,a,e";
    }
    else
    if(c>d && d>b && b>e && e>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,d,b,e,a";
    }
    else
    if(c>d && d>e && e>a && a>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,d,e,a,b";
    }
    else
    if(c>d && d>e && e>b && b>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,d,e,b,a";
    }
    else
    if(c>e && e>a && a>b && b>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,e,a,b,d";
    }
    else
    if(c>e && e>a && a>d && d>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,e,a,d,b";
    }
    else
    if(c>e && e>b && b>a && a>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,e,b,a,d";
    }
    else
    if(c>e && e>b && b>d && d>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,e,b,d,a";
    }
    else
    if(c>e && e>d && d>a && a>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,e,d,a,b";
    }
    else
    if(c>e && e>d && d>b && b>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"c,e,d,b,a";
    }
    else
    if(d>a && a>c && c>b && b>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,a,c,b,e";
    }
    else
    if(d>a && a>c && c>e && e>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,a,c,e,b";
    }
    else
    if(d>a && a>e && e>c && c>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,a,e,c,b";
    }
    else
    if(d>b && b>a && a>c && c>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,b,a,c,e";
    }
    else
    if(d>b && b>a && a>e && e>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,b,a,e,c";
    }
    else
    if(d>b && b>c && c>a && a>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,b,c,a,e";
    }
    else
    if(d>b && b>c && c>e && e>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,b,c,e,a";
    }
    else
    if(d>b && b>e && e>a && a>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,b,e,a,c";
    }
    else
    if(d>b && b>e && e>c && c>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,b,e,c,a";
    }
    else
    if(d>c && c>a && a>b && b>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,c,a,b,e";
    }
    else
    if(d>c && c>a && a>e && e>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,c,a,e,b";
    }
    else
    if(d>c && c>b && b>a && a>e)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,c,b,a,e";
    }
    else
    if(d>c && c>b && b>e && e>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,c,b,e,a";
    }
    else
    if(d>c && c>e && e>a && a>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,c,e,a,b";
    }
    else
    if(d>c && c>e && e>b && b>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,c,e,b,a";
    }
    else
    if(d>e && e>a && a>c && c>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,e,a,c,b";
    }
    else
    if(d>e && e>b && b>a && a>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,e,b,a,c";
    }
    else
    if(d>e && e>b && b>c && c>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,e,b,c,a";
    }
    else
    if(d>e && e>c && c>a && a>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,e,c,a,b";
    }
    else
    if(d>e && e>c && c>b && b>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"d,e,c,b,a";
    }
    else
    if(e>a && a>b && b>c && c>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,a,b,c,d";
    }
    else
    if(e>a && a>b && b>d && d>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,a,b,d,c";
    }
    else
    if(e>a && a>c && c>b && b>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,a,c,b,d";
    }
    else
    if(e>a && a>c && c>d && d>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,a,c,d,b";
    }
    else
    if(e>a && a>d && d>c && c>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,a,d,c,b";
    }
    else
    if(e>a && a>d && d>b && b>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,a,d,b,c";
    }
    else
    if(e>b && b>a && a>b && b>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,b,a,b,c";
    }
    else
    if(e>b && b>a && a>c && c>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,b,a,c,d";
    }
    else
    if(e>b && b>a && a>d && d>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,b,a,d,c";
    }
    else
    if(e>b && b>c && c>a && a>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,b,c,a,d";
    }
    else
    if(e>b && b>c && c>d && d>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,b,c,d,a";
    }
    else
    if(e>b && b>d && d>a && a>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,b,d,a,c";
    }
    else
    if(e>b && b>d && d>c && c>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,b,d,c,a";
    }
    else
    if(e>c && c>a && a>b && b>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,c,a,b,d";
    }
    else
    if(e>c && c>a && a>d && d>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,c,a,d,b";
    }
    else
    if(e>c && c>b && b>a && a>d)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,c,b,a,d";
    }
    else
    if(e>c && c>b && b>d && d>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,c,b,d,a";
    }
    else
    if(e>c && c>d && d>a && a>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,c,d,a,b";
    }
    else
    if(e>c && c>d && d>b && b>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,c,d,b,a";
    }
    else
    if(e>d && d>a && a>c && c>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,d,a,c,b";
    }
    else
    if(e>d && d>b && b>a && a>c)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,d,b,a,c";
    }
    else
    if(e>d && d>b && b>c && c>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,d,b,c,a";
    }
    else
    if(e>d && d>c && c>a && a>b)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,d,c,a,b";
    }
    else
    if(e>d && d>c && c>b && b>a)
    {
        cout<<"Maka urutan nilai dari terbesar adalah "<<"e,d,c,b,a";
    }
    return 0;
}
