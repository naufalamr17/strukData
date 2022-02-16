// Program linkedList
// Nama Kelompok : RRN
// Kelas : 2E-Teknik Informatika

#include <bits/stdc++.h>

using namespace std;

// struktur node linked list
class Node
{
	public:
	int data;
	Node *next;
};

// menghapus node
void deleteNode(Node *head, Node *n)
{
	// mendefinisikan node sebelum dihapus
	Node *prev = head;
	while(prev->next != NULL && prev->next != n)
		prev = prev->next;

	// menghapus node dari Linked List
	prev->next = prev->next->next;

	// membebaskan memori
	free(n);

}

// funsi untuk memasukkan isi node
void push(Node **head_ref, int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

// menampilkan linked list
void printList(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	Node *head = NULL;

	// memasukkan isi node
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	cout<<"Linked List: ";
	printList(head);

	cout<<"\nMenghapus node ke-2 dari akhir list";
	deleteNode(head, head->next->next->next);

	cout<<"\nModified Linked List: ";
	printList(head);
}
