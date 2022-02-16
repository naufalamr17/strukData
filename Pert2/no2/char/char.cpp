/*
Program untuk Penerapan Tipe Data Char
Nama    : Naufal Ammar Hidayatulloh
NPM     : 2010631170104
Kelas   : 2 E
*/

#include <iostream>

using namespace std;

int main()
{
    char varSatu, varDua, varTiga;

    cout << "Input Variabel Pertama\t: ";
    cin >> varSatu;
    if (varSatu >= 'a' && varSatu <= 'z')
    {
        cout << varSatu << " adalah huruf" << endl;
    }
    else if (varSatu >= '1' && varSatu <= '9')
    {
        cout << varSatu << " adalah angka" << endl;
    }
    else
    {
        cout << varSatu << " adalah simbol" << endl;
    }
    cout << "\nInput Variabel Kedua\t: ";
    cin >> varDua;
    if (varDua >= 'a' && varDua <= 'z')
    {
        cout << varDua << " adalah huruf" << endl;
    }
    else if (varDua >= '1' && varDua <= '9')
    {
        cout << varDua << " adalah angka" << endl;
    }
    else
    {
        cout << varDua << " adalah simbol" << endl;
    }
    cout << "\nInput Variabel Ketiga\t: ";
    cin >> varTiga;
    if (varTiga >= 'a' && varTiga <= 'z')
    {
        cout << varTiga << " adalah huruf" << endl;
    }
    else if (varTiga >= '1' && varTiga <= '9')
    {
        cout << varTiga << " adalah angka" << endl;
    }
    else
    {
        cout << varTiga << " adalah simbol" << endl;
    }
}
