// Naufal Ammar Hidayatulloh
// 2010631170104

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char nama[50], nis[50], kelas[50];
    string huruf;

    struct nilai
    {
        float nilai[6];
        string mk[6] = {"B.Inggris", "B.Jepang", "Matematika", "B.indonesia", "AljabarLin", "PengantarTI"};
    } score;

    cout << "\nE-Raport Siswa\n\nInput Nama Siswa\t: ";
    cin.getline(nama, 50);
    cout << "Input Nomor Induk\t: ";
    cin >> nis;
    cout << "Input Kelas\t\t: ";
    cin >> kelas;

    cout << endl
         << "Masukkan Nilai : \n"
         << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << score.mk[i] << "\t: ";
        cin >> score.nilai[i];
    }

    cout << "\nResult :"
         << endl;
    cout << "Nama\t: " << nama << endl
         << "NIS\t: " << nis << endl
         << "Kelas\t: " << kelas << endl
         << endl;

    cout << setiosflags(ios::left) << setw(4) << "No";
    cout << setiosflags(ios::left) << setw(20) << "MatKul";
    cout << setiosflags(ios::left) << setw(10) << "Nilai";
    cout << setiosflags(ios::left) << setw(20) << "Keterangan" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << setiosflags(ios::left) << setw(4) << i + 1;
        cout << setiosflags(ios::left) << setw(20) << score.mk[i];
        cout << setiosflags(ios::left) << setw(10) << score.nilai[i];
        if (score.nilai[i] >= 85 && score.nilai[i] <= 100)
        {
            cout << setiosflags(ios::left) << setw(20) << "Sangat Baik" << endl;
        }
        else if (score.nilai[i] >= 65 && score.nilai[i] <= 84)
        {
            cout << setiosflags(ios::left) << setw(20) << "Baik" << endl;
        }
        else if (score.nilai[i] <= 64)
        {
            cout << setiosflags(ios::left) << setw(20) << "Kurang" << endl;
        }
    }

    float jumlah = 0;
    for (int i = 0; i < 6; i++)
    {
        jumlah += score.nilai[i];
    }
    
    float avr = jumlah / 6;

    if (avr >= 85 && avr <= 100)
    {
        huruf = "Sangat Baik";
    }
    if (avr >= 65 && avr <= 84)
    {
        huruf = "Baik";
    }
    if (avr <= 64)
    {
        huruf = "Kurang";
    }

    cout << "\n\nAverage -->> " << avr << " (" << huruf << ")" << endl;
}