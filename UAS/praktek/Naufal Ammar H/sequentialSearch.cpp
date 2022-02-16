// Naufal Ammar Hidayatulloh
// 2E - Teknik Informatika
// 2010631170104

#include <bits/stdc++.h>

using namespace std;

// fungsi sequential search
int seqSearch(int *array, int size, int key)
{
    // perulangan untuk mengecek pada indeks array ke berapa data tersebut berada
    for (int i = 0; i < size; i++)
    {
        // seleksi kondisi untuk mengecek apakah ada data array yang sama dengan data yang dicari
        if (array[i] == key)
        {
            return i;
        }
    }
    // jika tidak ada maka program mengembalikan nilai -1
    return -1;
}

// fungsi utama
int main()
{
    // mendeklarasikan variabel untuk menyimpan ukuran array yang akan kita buat
    int ukuranArray;
    cout << endl
         << "sequentialSearch" << endl
         << endl
         << "Input Jumlah Array : ";
    cin >> ukuranArray;
    cout << "endl";

    // mendeklarasikan sebuah array dengan ukuran sesuai yang kita input beserta variabel untuk angka yg kita cari
    int arr[ukuranArray], target;

    // looping untuk memasukkan data array
    for (int i = 0; i < ukuranArray; i++)
    {
        cout << "Masukan value array ke " << i << " : ";
        cin >> arr[i];
    }

    cout << endl
         << "Masukan angka yang ingin dicari : ";
    cin >> target;

    // mencari angka dengan sequential search
    int index = seqSearch(arr, ukuranArray, target);
    // seleksi kondisi dimana jika nilai yang dihasilkan  fungsi seqSearch adalah negasi -1 maka akan mencetak indeks array
    if (index != -1)
    {
        cout << endl
             << "Angka ditemukan di index ke : " << index;
    }
    else
    {
        cout << endl
             << "Angka tidak ditemukan";
    }

    return 0;
}