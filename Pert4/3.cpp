#include <iostream>
#define Nmaks10

using namespace std;

typedef int matrik;

int main(int argc, char const *argv[])
{
    int n, i, j;
    matrik A[3][3], B[3][3], C[3][3];

    cout << "Program Penjumlaha Matrik A 2x2 dan B 2x2" << endl
         << endl;

    n = 2;
    cout << "Masukkan Nilai-Nilai Matrik A" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "A[" << i << "," << j << "] = ";
            cin >> A[i][j];
        }
    }

    system("cls");
    cout << "Masukkan Nilai-Nilai Matrik B" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "B[" << i << "," << j << "] = ";
            cin >> B[i][j];
        }
    }

    system("cls");
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Hasilnya adalah = " << endl;

    for (j = 1; j <= n; j++)
    {
        cout << C[1][j] << " ";
    }
    cout << endl;
    for (j = 1; j <= n; j++)
    {
        cout << C[2][j] << " ";
    }
}
