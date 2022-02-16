#include <iostream>

using namespace std;

void push(int stack[], int *top, int value)
{
    *top = *top + 1;
    stack[*top] = value;
}

void pop(int stack[], int *top, int *value)
{
    *value = stack[*top];
    *top = *top - 1;
}

void pop2(int stack[], int *top, int *value)
{
    *value = stack[*top];
    *top = *top - 1;
}

int main()
{
    int stack[3];
    int top = -1;
    int value, konten[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan Nilai Batu : ";
        cin >> value;
        push(stack, &top, value);

        cout << "Masukkan Nilai Batu Sekali Lagi : ";
        cin >> konten[i];
    }

    cout << endl
         << "Kondisi Awal\n"
         << "Menara A : ";
    for (int i = 0; i < 3; i++)
    {
        pop(stack, &top, &value);
        cout << value;
    }
    cout << endl
         << "Menara C : Kosong\nMenara B : Kosong";

    cout << endl
         << endl
         << "Step 1" << endl
         << "Menara A : Kosong" << endl;
    cout << "Menara C : ";

    for (int i = 0; i < 3; i++)
    {
        cout << konten[i];
    }
    cout << endl
         << "Menara B : Kosong";

    cout << endl
         << endl
         << "Step 2"
         << "\nMenara A : Kosong\nMenara C : Kosong\nMenara B : ";
    for (int i = 2; i >= 0; i--)
    {
        cout << konten[i];
    }
}
