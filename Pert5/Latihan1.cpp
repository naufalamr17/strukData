#include <iostream>

using namespace std;

int main()
{
    struct durasi
    {
        float jam, menit, detik;
    } rntl;

    cout << "\t\tRental Warnet" << endl
         << endl;
    cout << "Masukkan Durasi Rental" << endl
         << "Jam\t: ";
    cin >> rntl.jam;
    cout << "Menit\t: ";
    cin >> rntl.menit;
    cout << "Detik\t: ";
    cin >> rntl.detik;
    cout << endl;

    float hour = (rntl.jam * 3600) / 30, minute = (rntl.menit * 60) / 30, second = rntl.detik / 30;

    cout << "Durasi Anda\t= " << rntl.jam << " : " << rntl.menit << " : " << rntl.detik << endl
         << "Total\t\t= Rp. " << (hour + minute + second) * 130;
}
