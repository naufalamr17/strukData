/*
Program untuk Penerapan Operasi Manipulasi String strcpy
Nama    : Naufal Ammar Hidayatulloh
NPM     : 2010631170104
Kelas   : 2 E
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char varSatu[50], varDua[50], src[50] = "Salam Kenal";

    cout << "Input Variabel Pertama\t: ";
    cin >> varSatu;
    cout << "Input Variabel Kedua\t: ";
    cin.ignore();
    cin.getline(varDua, 50);

    cout << strcat(varSatu, varDua) << ". " << strcpy(varSatu, src);
}
