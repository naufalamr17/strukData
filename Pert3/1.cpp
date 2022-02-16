#include <iostream>
using namespace std;

int main()
{
    int x;
    int *px;

    x = 2;
    px = &x;
    cout << "Nilai x\t\t : " << x << endl;
    cout << "Nilai *px\t : " << *px << endl;
    cout << "Alamat x\t : " << px << endl;
}
