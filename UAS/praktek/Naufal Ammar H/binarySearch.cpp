// Naufal Ammar Hidayatulloh
// 2E - Teknik Informatika
// 2010631170104

#include <bits/stdc++.h>

using namespace std;

// fungsi binary search
int binSearch(int *array, int left, int right, int key)
{
    // perulangan saat kondisi titik di kiri (batas bawah) lebih kecil sama dengan dari kanan (batas atas)
    while (left <= right)
    {
        int m = left + (right - left) / 2;
        if (key == array[m])
            return m;
        else if (key < array[m])
            right = m - 1;
        else
            left = m + 1;
    }
    return -1;
}

// fungsi bubble sort untuk menyusun data secara ascending
int *bubbleSort(int array[], int n)
{
    int param;
    int y = n - 2;
    while (y >= 0)
    {
        int index = 0;
        while (index <= y)
        {
            if (array[index] > array[index + 1])
            {
                param = array[index];
                array[index] = array[index + 1];
                array[index + 1] = param;
            }
            index++;
        }
        y--;
    }
    return array;
}

// fungsi utama
int main()
{
    // mendeklarasikan variabel untuk menyimpan ukuran array yang akan kita buat dan variabel untuk angka yg kita cari
    int ukuranArray, key;
    cout << endl
         << "binarySearch" << endl
         << endl
         << "Input Jumlah Array: ";
    cin >> ukuranArray;
    cout << endl;

    // mendeklarasikan array untuk di sort
    int *array = new int[ukuranArray];
    for (int i = 0; i < ukuranArray; i++)
    {
        cout << "Masukan value array ke " << i << " : ";
        cin >> array[i];
    }

    cout << endl
         << "Masukan angka yang ingin dicari : ";
    cin >> key;

    // array akan di sort terlebih dahulu baru akan di cari
    array = bubbleSort(array, ukuranArray);
    int res = binSearch(array, 0, ukuranArray - 1, key);

    // seleksi kondisi dimana jika nilai yang dihasilkan  fungsi binSearch adalah negasi -1 maka akan mencetak indeks array
    if (res != -1)
    {
        cout << endl
             << "angka " << key << " ditemukan ";
    }
    else
    {
        cout << endl
             << "angka " << key << " tidak ditemukan";
    }

    return 0;
}