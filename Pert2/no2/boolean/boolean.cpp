/*
Program untuk Penerapan Tipe Data Boolean
Nama    : Naufal Ammar Hidayatulloh
NPM     : 2010631170104
Kelas   : 2 E
*/

#include <iostream>

using namespace std;

int main()
{
    float varSatu, varDua;
    bool testSatu, testDua, testTiga;

    cout << "Input Variabel Pertama\t: ";
    cin >> varSatu;
    cout << "Input Variabel Kedua\t: ";
    cin >> varDua;

    testSatu = varSatu == varDua;
    testDua = varSatu > varDua;
    testTiga = varSatu < varDua;

    cout << "\nVariabel Pertama = Variabel Kedua\t => " << testSatu << endl;
    cout << "Variabel Pertama > Variabel Kedua\t => " << testDua << endl;
    cout << "Variabel Pertama < Variabel Kedua\t => " << testTiga << endl;

    cout << "\nNote\t: 1 is true \n\t  0 is false";
}
