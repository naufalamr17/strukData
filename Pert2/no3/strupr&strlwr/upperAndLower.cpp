/*
Program untuk Penerapan Operasi Manipulasi String strupr dan strlwr
Nama    : Naufal Ammar Hidayatulloh
NPM     : 2010631170104
Kelas   : 2 E
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char varSatu[50];

    cout << "Input Variabel Pertama\t: ";
    cin.getline(varSatu, 50);

    cout << "Mengubah string ke huruf besar\t=>\t" << strupr(varSatu) << endl
         << "Mengubah string ke huruf kecil\t=>\t" << strlwr(varSatu);
}
