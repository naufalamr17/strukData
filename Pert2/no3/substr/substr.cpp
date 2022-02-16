/*
Program untuk Penerapan Operasi Manipulasi String substr
Nama    : Naufal Ammar Hidayatulloh
NPM     : 2010631170104
Kelas   : 2 E
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string varSatu = "Naufal Ammar Hidayatulloh";

    cout << varSatu << endl;
    cout << "Bagian string yang saya ambil adalah\t=> " << varSatu.substr(1, 3);
}
