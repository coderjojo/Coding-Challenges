#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

void display(Node *temp){
	if(temp == NULL)
		cout<<"Empty";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void InsertEnd(Node *temp){
	Node *nn = new Node;
	int D;

	cout<<"\nEnter data at end: ";

	cin>>D;
	nn->data = D;
	if(temp == NULL)
		temp = nn;
	while(temp->next!=NULL)
		temp = temp->next;
	nn->next = NULL;
	temp->next = nn;
}

Node* InsertStart(Node *temp){
	int d;
	Node *nn = new Node;
	cout<<"\nEnter data at start: ";
	cin>>d;

	nn->data = d;

	if(temp == NULL){
		temp == nn;
		nn->next = NULL;
	}
	else{
	nn->next = temp;
	temp = nn;
	}
	return temp;
}

void InserBetween(Node *temp){
	int data, pos;
	cout<<"Enter the position to insert the element: ";
	
}

int main(int argc, char const *argv[])
{
	Node *nn, *head, *temp;
	int ch;
	nn = new Node;
 	cout<<"Enter data ";
 	cin>>ch;
 	nn->data = ch;
 	nn->next = NULL;
 	head = nn;
 	temp = head;
 	temp = InsertStart(temp);
 	InsertEnd(temp);
	display(temp);
	return 0;
}