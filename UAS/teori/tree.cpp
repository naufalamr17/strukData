// Program tree
// Nama Kelompok : RRN
// Kelas : 2E-Teknik Informatika

#include <bits/stdc++.h>

using namespace std;

// struktur node tree
struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// menentukan postorder
// aturan postorder adalah left, right, root
void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    cout << node->data << " ";
}

// menentukan inorder
// aturan inorder adalah left, root, right
void printInorder(struct Node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

// menentukan preorder
// aturan postorder adalah root, left, right
void printPreorder(struct Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";

    printPreorder(node->left);

    printPreorder(node->right);
}

int main()
{
    // input angka dari node tree
    struct Node *root = new Node(27);
    root->left = new Node(14);
    root->right = new Node(35);
    root->left->left = new Node(10);
    root->left->right = new Node(19);
    root->right->left = new Node(31);
    root->right->right = new Node(42);

    cout << "\nPreorder traversal\n";
    printPreorder(root);

    cout << "\nInorder traversal\n";
    printInorder(root);

    cout << "\nPostorder traversal\n";
    printPostorder(root);
}
