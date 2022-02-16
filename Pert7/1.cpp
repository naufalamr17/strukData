#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

using namespace std;

void push(int stack[], int *top, int value);
void pop(int stack[], int *top, int *value);

int main()
{
    int stack[MAX];
    int top = -1;
    int n, value;

    do
    {
        do
        {
            cout << "Masukkan Nilai yg di Push : ";
            cin >> value;
            push(stack, &top, value);

            cout << "Tekan 1 untuk Melanjutkan" << endl;
            cin >> n;
        } while (n == 1);

        cout << "Tekan 1 untuk Melakukan Pop\n";
        cin >> n;

        while (n == 1)
        {
            pop(stack, &top, &value);
            cout << "Nilai yang di Pop : " << value << endl;
            cout << "Tekan 1 untuk Melakukan Pop sebuah Elemen ";
            cin >> n;
        }

        cout << endl
             << "Tekan 1 untuk Melanjutkan\n";
        cin >> n;
    } while (n == 1);
}

void push(int stack[], int *top, int value)
{
    if (*top < MAX)
    {
        *top = *top + 1;
        stack[*top] = value;
    }
    else
    {
        cout << "Stack Penuh";
        exit(0);
    }
}

void pop(int stack[], int *top, int *value)
{
    if (*top >= 0)
    {
        *value = stack[*top];
        *top = *top - 1;
    }
    else
    {
        cout << "Stack Kosong";
        exit(0);
    }
}
