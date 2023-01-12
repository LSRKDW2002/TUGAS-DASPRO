#include <iostream>
using namespace std;

int a, b;

int main()
{
    a = 0;
    b = 10;
    do{
        a = a + 2;
        b = b - 1;
        cout << " ";
        cout << a;
        cout << " ";
        cout << b;
    }
    while (a <=24 && b >=0);
    return 0;
}