#include <iostream>

using namespace std;

int main()
{
    struct mahasiswa
    {
        char nim[15];
        char nama[30];
        char alamat[50];
        float ipk;
    };

    mahasiswa mhs;

    cout << "NIM\t\t: ";
    cin.getline(mhs.nim, 15);
    cout << "Nama\t\t: ";
    cin.getline(mhs.nama, 30);
    cout << "Alamat\t\t: ";
    cin.getline(mhs.alamat, 50);
    cout << "Nilai IPK\t: ";
    cin >> mhs.ipk;

    cout << endl
         << endl;

    cout << "NIM Anda\t: " << mhs.nim << endl;
    cout << "Nama Anda\t: " << mhs.nama << endl;
    cout << "Alamat Anda\t: " << mhs.alamat << endl;
    cout << "Nilai IPK Anda\t: " << mhs.ipk << endl;
}
