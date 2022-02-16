#include <iostream>

using namespace std;

int main()
{
    int x[10] = {45, 34, 23, 34, 32, 12, 65, 76, 34, 23};
    int i;
    int maks = -1000;
    int min = 1000;
    for (i = 0; i < 10; i++)
    {
        if (x[i] > maks)
        {
            maks = x[i];
        }
        else if (x[i] < min)
        {
            min = x[i];
        }
    }
    cout << "Nilai Maksimum : " << maks << endl;
    cout << "Nilai Minimum : " << min << endl;
}
