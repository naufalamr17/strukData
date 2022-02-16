#include <iostream>

using namespace std;

int main()
{
    struct mahasiswa
    {
        char nama[50];
        char npm[50];
    } mhsw;
    struct nilai
    {
        float tugas, kuis, mid, uas;
    } nlkh;

    cout << "Nama\t\t:";
    cin >> mhsw.nama;
    cout << "NPM\t\t:";
    cin >> mhsw.npm;
    cout << "Nilai tugas\t:";
    cin >> nlkh.tugas;
    cout << "Nilai kuis\t:";
    cin >> nlkh.kuis;
    cout << "Nilai UTS\t:";
    cin >> nlkh.mid;
    cout << "Nilai UAS\t:";
    cin >> nlkh.uas;

    float na = ((0.1 * nlkh.tugas) + (0.2 * nlkh.kuis) + (0.3 * nlkh.mid) + (0.4 * nlkh.uas));
    cout << endl
         << endl
         << "Nama\t\t: " << mhsw.nama << endl
         << "NPM\t\t: " << mhsw.npm << endl
         << "Nilai Akhir\t: " << na << endl;
    if (na >= 85)
    {
        cout << "Huruf Mutu\t: A" << endl;
    }
    else if (na >= 70 && na < 85)
    {
        cout << "Huruf Mutu\t: B" << endl;
    }
    else if (na >= 55 && na < 70)
    {
        cout << "Huruf Mutu\t: C" << endl;
    }
    else if (na >= 40 && na < 55)
    {
        cout << "Huruf Mutu\t: D" << endl;
    }
    else if (na < 40)
    {
        cout << "Huruf Mutu\t: E" << endl;
    }
}
