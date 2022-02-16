/*
Program
Nama kelompok: JOKER
Kelas        : 2E
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node //Membuat struct Nodenya
{
    int data;
    Node *kiri;
    Node *kanan;
};

void tambah (Node **root, int databaru)//membuat fungsi untuk menambahkan elemen ke data yang baru
{
    if ((*root)== NULL)
    {
        Node *baru;
        baru = new Node;
        baru->data = databaru;
        baru->kanan = NULL;
        baru->kiri = NULL;
        (*root)=baru;
        (*root)->kanan = NULL;
        (*root)->kiri = NULL;
        cout<<"Data Bertambah!";
    }
    else if (databaru<(*root)->data)tambah(&(*root)->kiri, databaru);//jika data yang dimasukan lebih kecil pada
    //elemen root maka akan diletakan di sebelah kiri
    else if (databaru>(*root)->data)tambah(&(*root)->kanan, databaru);//jika data yang dimasukan lebih kecil pada
    //elemen root maka akan diletakan di sebelah kanan
    else if (databaru==(*root)->data)
    {
       cout<<"Data Sudah Ada!";
    };//jika data yang dimasukan sama dengan pada elemen root maka akan mencekat kalimat di atas
}

void preOrder(Node *root)//membuat fungsi untuk mencetak tree secara preOrder
{
    if(root !=NULL)
    {
        cout<<root->data<<" ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

void inOrder(Node *root)//membuat fungsi untuk mencetak tree secara inOrder
{
    if(root !=NULL)
    {
        inOrder(root->kiri);
        cout<<root->data<<" ";
        inOrder(root->kanan);
    }
}

void postOrder(Node *root)//membuat fungsi untuk mencetak tree secara postOrder
{
    if(root !=NULL)
    {
        postOrder(root->kiri);
        postOrder(root->kanan);
        cout<<root->data<<" ";
    }
}

int main()
{
    int pil, data;
    Node *pohon;
    pohon = NULL;

    do
    {
        system("cls");
        cout<<"\tProgram Tree C++";
        cout<<"\n\t===============";
        cout<<"\nContoh Tree Yang Akan Dijalankan";
        cout<<"\n=================================";
        cout<<"\n                  27";
        cout<<"\n           14            35";
        cout<<"\n       10      19    31      42";
        cout<<"\n=================================";
        cout<<"\nMenu";
        cout<<"\n-------------------\n";
        cout<<"1. Tambah\n";
        cout<<"2. Lihat Pre-Order\n";
        cout<<"3. Lihat in-Order\n";
        cout<<"4. Lihat post-Order\n";
        cout<<"5. Exit\n";
        cout<<"pilihan : ";
        scanf("%d", &pil);
        switch (pil)
        {
        case 1:
            cout<<"\nINPUT : ";
            cout<<"\n-------";
            cout<<"\nData Baru : ";
            scanf("%d", &data);//untuk memasukan data baru
            tambah(&pohon, data);
            break;
        case 2:
            cout<<"\nOUTPUT PREORDER : ";
            cout<<"\n--------\n";
            if(pohon!=NULL)//jika isi dari variabel pohon tidak kosong maka akan memanggil fungsi preOrder
                preOrder(pohon);
            else
                cout<<"Masih Kosong!";
            break;
        case 3:
            cout<<"\nOUTPUT INORDER : ";
            cout<<"\n-------\n";
            if(pohon!=NULL)//jika isi dari variabel pohon tidak kosong maka akan memanggil fungsi inOrder
                inOrder(pohon);
            else
                cout<<"Masih Kosong!";
            break;
        case 4:
            cout<<"\nOUTPUT POSTORDER : ";
           cout<<"\n-------\n";
            if(pohon!=NULL)//jika isi dari variabel pohon tidak kosong maka akan memanggil fungsi postOrder
                postOrder(pohon);
            else
                cout<<"Masih Kosong!";
            break;
        }
        _getch();
    }
    while(pil != 5);//perulangan untuk mengulang pilihan yang sudah dibuat
    return EXIT_FAILURE;
}
