#include <iostream>
#include <malloc.h>

#define Nil NULL

using namespace std;
struct nod
{
    struct nod *left;
    char data;
    struct nod *right;
};

typedef struct nod NOD;
typedef NOD POKOK;
NOD *NodBaru(char item)
{
    NOD *n;

    n = (NOD *)malloc(sizeof (NOD));

    if (n != Nil)
    {
        n -> data = item;
        n -> left = Nil;
        n -> right = Nil;
    }

    return n;
}
void BinaPokok (POKOK **T)
{
    *T = Nil;
}

typedef enum {False=0, True=1} Bool;

Bool PokokKosong (POKOK *T)
{
    return ((Bool) (T == Nil));
}

void TambahNod (NOD **p, char item)
{
    NOD *n;

    n = NodBaru(item);

    *p = n;
}

void preOrder (POKOK *T)
{
    if (!PokokKosong(T))
    {
        cout<<" "<< T -> data;
        preOrder (T -> left);
        preOrder (T -> right);
    }
}

void inOrder (POKOK *T)
{
    if (!PokokKosong(T))
    {
        inOrder (T -> left);
        cout<<" "<< T -> data;
        inOrder (T -> right);
    }
}

void postOrder (POKOK *T)
{
    if (!PokokKosong(T))
    {
        postOrder (T -> left);
        postOrder (T -> right);
        cout<<" "<< T -> data;
    }
}
int main()
{
    POKOK *kelapa;
    char buah;

    BinaPokok(&kelapa);

    TambahNod(&kelapa, buah = 'M');

    TambahNod(&kelapa -> left, buah = 'E');

    TambahNod(&kelapa -> left -> right, buah = 'I');

    TambahNod(&kelapa -> right, buah = 'L');

    TambahNod(&kelapa -> right -> right, buah = 'O');

    TambahNod(&kelapa -> right -> right -> left, buah = 'D');

    cout<<"Tampilan Secara PreOrder  : ";
    preOrder(kelapa);

    cout<<endl;
    cout<<"Tampilan Secara InOrder   : ";
    inOrder(kelapa);

    cout<<endl;
    cout<<"Tampilan Secara PostOrder : ";
    postOrder(kelapa);

    cout<<endl;
    cout<<endl;
}

// Modul