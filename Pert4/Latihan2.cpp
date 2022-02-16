#include <iostream>
using namespace std;

int main()
{
  int A[3][3], B[3][3], C[3][3];
  int m, n, o, jumlah = 0;

  cout << "\t\t\tProgram Perkalian 2 Matriks\n";
  cout << "\t\t\t=============================\n"
       << endl;
  cout << "Input Matriks Pertama (3x3): \n\n";

  for (m = 0; m < 3; m++)
  {
    for (n = 0; n < 3; n++)
    {
      cin >> A[m][n];
    }
  }
  cout << endl;

  cout << "Input Matriks Kedua (3x3): \n\n";

  for (m = 0; m < 3; m++)
  {
    for (n = 0; n < 3; n++)
    {
      cin >> B[m][n];
    }
  }
  cout << endl;
  cout << "Hasil: \n\n";
  for (m = 0; m < 3; m++)
  {
    for (n = 0; n < 3; n++)
    {
      for (o = 0; o < 3; o++)
      {
        jumlah = jumlah + A[m][o] * B[o][n];
      }
      C[m][n] = jumlah;
      jumlah = 0;
    }
  }

  for (m = 0; m < 3; m++)
  {
    for (n = 0; n < 3; n++)
    {
      cout << " " << A[m][n];
    }
    if (m == 1)
    {
      cout << " x";
    }
    else
      cout << "\t";
    for (n = 0; n < 3; n++)
    {
      cout << " " << B[m][n];
    }
    if (m == 1)
    {
      cout << " =";
    }
    else
      cout << "\t";
    for (n = 0; n < 3; n++)
    {
      cout << " " << C[m][n];
    }
    cout << endl;
  }
}