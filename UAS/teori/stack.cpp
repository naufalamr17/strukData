// Program stack
// Nama Kelompok : RRN
// Kelas : 2E-Teknik Informatika

#include <bits/stdc++.h>

using namespace std;

// mendefinisikan batas stack
const int ukuranStack = 200;
int stackS = 0, stackT = 0;

// mendefinisikan stack dengan array
array<string, ukuranStack> s;
array<string, ukuranStack> t;

// cek stack penuh atau tidak
bool stackFull(int top)
{
    if (top == ukuranStack)
    {
        // jika stack mencapai batas maksimal maka akan mengembalikan nilai menjadi "Stack Penuh"
        return true;
    }
    else
    {
        return false;
    }
}

// menambahkan data ke stack s
void pushStkS(string data)
{
    // mengecek stack penuh atau tidak
    if (stackFull(stackS))
    {
        cout << "Stack Penuh" << endl;
    }
    else
    {
        s[stackS] = data;
        stackS++;
    }
}

// menambahkan data ke stack t
void pushStkT(string data)
{
    // mengecek stack penuh atau tidak
    if (stackFull(stackT))
    {
        cout << "Stack Penuh" << endl;
    }
    else
    {
        t[stackT] = data;
        stackT++;
    }
}

// menghapus tanda "#" dan karakter sebelumnya di stack s
void deleteHashtagS()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] == "#")
        {
            s[0] == "";
            stackS--;
        }
        else if (s[i] == "#" && s[i + 1] == "#")
        {
            s[1 + 1] = "";
            s[i] = "";
            s[i - 1] = "";
            s[i - 2] = "";
        }
        else if (s[i] == "#")
        {
            s[i] = "";
            s[i - 1] = "";
            stackS -= 2;
        }
    }
}

// menghapus tanda "#" dan karakter sebelumnya di stack s
void deleteHashtagT()
{
    for (int i = 0; i < t.size(); i++)
    {
        if (t[0] == "#")
        {
            t[0] == "";
            stackT--;
        }
        else if (s[i] == "#" && s[i + 1] == "#")
        {
            s[1 + 1] = "";
            s[i] = "";
            s[i - 1] = "";
            s[i - 2] = "";
        }
        else if (t[i] == "#")
        {
            t[i] = "";
            t[i - 1] = "";
            stackT -= 2;
        }
    }
}

// mengece konten stack s dan t sama atau tidak
bool stackSama(array<string, ukuranStack> stackA, array<string, ukuranStack> stackB)
{
    for (int i = 0; i < stackA.size(); i++)
    {
        if (stackA[i] != stackB[i])
        {
            return false;
        }
    }
    return true;
}

// menampilkan data di stack
void tampilkanStack(array<string, ukuranStack> stack)
{
    for (int i = 0; i < stack.size(); i++)
    {
        if (stack[i] != "")
        {
            cout << stack[i];
        }
    }
}

// mengecek input data lebih dari 1 atau tidak
bool cekJumlahChar(string data)
{
    if (data.size() > 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string data;

    while (true)
    {
        system("cls");
        // menampilkan data stack
        cout << "Data Di Stack " << endl
             << "Stack S : ";
        tampilkanStack(s);
        cout << endl
             << "Stack T : ";
        tampilkanStack(t);
        // menu
        cout << endl
             << "--------------------------" << endl
             << "1. Input stack s" << endl
             << "2. Input stack t" << endl
             << "3. Tampilkan hasil" << endl
             << "4. keluar" << endl
             << "Input [1-4] : ";
        cin >> data;
        if (data == "1")
        {
        pushS:
            system("cls");
            cout << "Masukan data ke stack S : ";
            cin >> data;
            if (cekJumlahChar(data))
            {
                cout << "Maaf kamu hanya dapat memasukan 1 character saja\n\n";
                system("pause");
                goto pushS;
            }
            pushStkS(data);
        }
        else if (data == "2")
        {
        pushT:
            system("cls");
            cout << "Masukan data ke stack T : ";
            cin >> data;
            if (cekJumlahChar(data))
            {
                cout << "Maaf kamu hanya dapat memasukan 1 character saja\n\n";
                system("pause");
                goto pushT;
            }
            pushStkT(data);
        }
        else if (data == "3")
        {
            system("cls");
            cout << "Sebelum menghapus tanda '#' :" << endl;
            cout << "Stack S : ";
            tampilkanStack(s);
            cout << endl;
            cout << "Stack T : ";
            tampilkanStack(t);
            cout << endl;
            // menghapus tanda #
            deleteHashtagS();
            deleteHashtagT();
            cout << "Sesudah menghapus tanda '#' : " << endl;
            cout << "Stack S : ";
            tampilkanStack(s);
            cout << endl;
            cout << "Stack T : ";
            tampilkanStack(t);
            cout << endl;
            cout << "Output  : " << boolalpha << stackSama(s, t) << endl;
            system("pause");
        }
        else if (data == "4")
        {
            break;
        }
        else
        {
            cout << "Input angka 1 - 4 " << endl;
            system("pause");
        }
    }
}