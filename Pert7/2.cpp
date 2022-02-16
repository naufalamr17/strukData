#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *push(struct node *p, int nilai)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        cout << "Error !!!";
        exit(0);
    }
    temp->data = nilai;
    temp->link = p;
    p = temp;
    return (p);
};

struct node *pop(struct node *p, int nilai)
{
    struct node *temp;

    if (p == NULL)
    {
        cout << "POP tidak dapat dilakukan, stack kosong";
        exit(0);
    }
    nilai = p->data;
    temp = p;
    p = p->link;
    free(temp);
    return (p);
};

int main()
{
    struct node *top = NULL;
    int n, nilai;

    do
    {
        do
        {
            cout << "Insert Nilai Elemen, PUSH : ";
            cin >> nilai;
            top = push(top, nilai);
            cout << "Tekan 1 untuk Melanjutkan : ";
            cin >> n;
        } while (n == 1);

        cout << "Tekan 1 untuk POP Elemen : ";
        cin >> n;
        cout << endl;

        while (n == 1)
        {
            top = pop(top, nilai);
            cout << "Nilai yang di POP : " << nilai << endl
                 << "Tekan 1 untuk POP Elemen : ";
            cin >> n;
        }

        cout << endl
             << "Enter 1 untuk Melanjutkan : ";
        cin >> n;
    } while (n == 1);
    return (0);
}