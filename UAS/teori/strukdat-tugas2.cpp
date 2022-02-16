#include <iostream>
#include <array>

using namespace std;

// inisisai ukuran stack dan batas stacknya
const int sizeStack = 200;
int topS = 0;
int topT = 0;

// inisiasi 2 buah stack dengan menggunakan array
array<string, sizeStack> s;
array<string, sizeStack> t;

// untuk cek apakah stacknya full apa tidak. jika full, maka return true jika tidak maka sebaliknya
bool isFull(int top)
{
    if (top == sizeStack)
    {
        return true;
    }

    return false;
}

// menambahkan data ke stack s
void pushToS(string data)
{
    // sebelum menambahkan data, cek dulu apakah stacknya full apa tidak
    if (isFull(topS))
    {
        cout << "Data Sudah Penuh" << endl;
    }
    else
    {
        s[topS] = data;
        topS++;
    }
}

// menambahkan data ke stack t
void pushToT(string data)
{
    // sebelum menambahkan data, cek dulu apakah stacknya full apa tidak
    if (isFull(topT))
    {
        cout << "Data Sudah Penuh" << endl;
    }
    else
    {
        t[topT] = data;
        topT++;
    }
}

// menghapus tanda "#" jika ada di stack s dan hapus karakter sebelumnya
void deleteIfHashS()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] == "#")
        {
            s[0] == "";
            topS--;
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
            topS -= 2;
        }
    }
}

// menghapus tanda "#" jika ada di stack t dan hapus karakter sebelumnya
void deleteIfHashT()
{
    for (int i = 0; i < t.size(); i++)
    {
        if (t[0] == "#")
        {
            t[0] == "";
            topT--;
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
            topT -= 2;
        }
    }
}

// untuk reset stack s
void resetStackS()
{
    for (int i = 0; i < s.size(); i++)
    {
        s.fill("");
        s[i] == "";
        topS = 0;
    }
}

// untuk reset stack t
void resetStackT()
{
    for (int i = 0; i < t.size(); i++)
    {
        t.fill("");
        t[i] == "";
        topT = 0;
    }
}

// untuk cek apakah stack s dan t itu sama apa tidak
bool ifSame(array<string, sizeStack> stackA, array<string, sizeStack> stackB)
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
void displayData(array<string, sizeStack> stack)
{
    for (int i = 0; i < stack.size(); i++)
    {
        if (stack[i] != "")
        {
            cout << stack[i];
        }
    }
}

// mengecek apakah user menginput data lebih dari 1 karakter apa tidak
bool checkChar(string data)
{
    if (data.size() > 1)
    {
        return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    string data;

    while (true)
    {

        system("cls");

        // menampilkan data stack sekarang
        cout << "Data Di Stack " << endl;
        cout << "==========================" << endl;

        cout << "Stack S : ";
        displayData(s);
        cout << endl;

        cout << "Stack T : ";
        displayData(t);
        cout << endl;

        cout << "Output  : " << boolalpha << ifSame(s, t) << endl;

        // menampilkan menu
        cout << "==========================" << endl;
        cout << "1. Masukan data ke stack s" << endl;
        cout << "2. Masukan data ke stack t" << endl;
        cout << "3. Tampilkan hasil" << endl;
        cout << "4. Reset data" << endl;
        cout << "5. keluar" << endl;

        cout << "Input [1-4] : ";
        cin >> data;

        if (data == "1")
        {
        pushS:
            system("cls");
            cout << "Masukan data ke stack S : ";
            cin >> data;
            if (checkChar(data))
            {
                cout << "Maaf kamu hanya dapat memasukan 1 character saja\n\n";

                system("pause");

                goto pushS;
            }

            pushToS(data);
        }
        else if (data == "2")
        {
        pushT:
            system("cls");
            cout << "Masukan data ke stack T : ";
            cin >> data;
            if (checkChar(data))
            {
                cout << "Maaf kamu hanya dapat memasukan 1 character saja\n\n";

                system("pause");

                goto pushT;
            }

            pushToT(data);
        }
        else if (data == "3")
        {
            system("cls");

            // menampilkan data sebelum menghapus tanda #
            cout << "Sebelum menghapus tanda '#' :" << endl;
            cout << "Stack S : ";
            displayData(s);
            cout << endl;

            cout << "Stack T : ";
            displayData(t);
            cout << endl;

            // menghapus tanda #
            deleteIfHashS();
            deleteIfHashT();

            cout << "Sesudah menghapus tanda '#' : " << endl;

            // menampilkan data sebelum menghapus tanda #
            cout << "Stack S : ";
            displayData(s);
            cout << endl;

            cout << "Stack T : ";
            displayData(t);
            cout << endl;

            cout << "Output  : " << boolalpha << ifSame(s, t) << endl;

            system("pause");
        }
        else if (data == "4")
        {
            cout << "Ingin reset stack yang mana [s/t] ? (atau input sembarang untuk batal) ";
            cin >> data;

            if (data == "s" || data == "S")
            {
                resetStackS();
            }
            else if (data == "t" || data == "T")
            {
                resetStackT();
            }
        }
        else if (data == "5")
        {
            break;
        }
        else
        {
            cout << "Mohon input angka 1 - 4 " << endl;
            system("pause");
        }
    }

    cout << "Terima kasih" << endl;

    return 0;
}