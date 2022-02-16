#include <iostream>

using namespace std;

int main()
{
    struct mahasiswa
    {
        char npm[14] = "2010631170104";
        char nama[10] = "Naufal";
        char angkatan[5] = "2020";
    } mahasiswa;

    cout << mahasiswa.nama << endl
         << mahasiswa.npm << endl
         << mahasiswa.angkatan;
}
