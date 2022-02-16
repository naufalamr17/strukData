#include <iostream>
#include <stdlib.h>

#define MAX 10

using namespace std;

void insert (int queue[], int *rear, int nilai);
void del (int queue[], int *front, int rear, int *nilai);

main()
{
    int queue[MAX];
    int front, rear;
    int n, nilai;

    front = rear = (-1);
    do
    {
        do
        {
            cout << "Masukkan Nilai Elemen : ";
            cin >> nilai;
            insert (queue, &rear, nilai);

            cout << endl;
            cout << "Tekan 1 untuk Melanjutkan : ";
            cin >> n;
        }while (n == 1);

        cout << endl;
        cout << "Tekan 1 untuk Menghapus Elemen : ";
        cin >> n;

        while (n == 1)
        {
            del (queue, &front, rear, &nilai);
            cout << "Nilai telah dihapus : " << nilai << endl;
            cout << endl;
            cout << "Tekan 1 untuk Menghapus Elemen : ";
            cin >> n;
        }

        cout << endl;
        cout << "Tekan 1 untuk Melanjutkan : ";
        cin >> n;
    } while (n == 1);
}

void insert (int queue[], int *rear, int nilai)
{
    if (*rear < MAX-1)
    {
        *rear = *rear + 1;
        queue[*rear] = nilai;
    }
    else
    {
        cout << "Queue Penuh, Insert Tidak Dapat Dilakukan" << endl;
        exit(0);
    }
}

void del (int queue[], int *front, int rear, int *nilai)
{
    if (*front == rear)
    {
        cout << "Queue Kosong, Delete Tidak Dapat Dilakukan" << endl;
        exit(0);
    }

    *front = *front + 1;
    *nilai = queue[*front];
}