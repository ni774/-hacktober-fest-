#include <iostream>
class Node{
    public:
    int data;
    Node *next=NULL;
    Node *previous=NULL;
    Node(int info){
        data=info;
    }
};
void print(Node *root){
    if(root==NULL)
     std::cout<<"empty";
    else{
        Node *temp;
        temp=root;
        while(temp!=NULL){
           std::cout<<temp->data<<" ";
           temp=temp->next;
        }
    }
}
void printReverse(Node *tail){
    if(tail==NULL)
      std::cout<<"empty";
    else{
        Node *temp;
        temp=tail;
        while(temp!=NULL){
           std::cout<<temp->data<<" ";
           temp=temp->previous;
        }
    }
}

int main() {
	// your code goes here
	Node *head=new Node(5);
	Node *a=new Node(6);
	head->next=a;
	a->previous=head;
	Node *b=new Node(7);
	a->next=b;
	b->previous=a;
	print(head);
    std::cout<<std::endl;
	printReverse(b);
	return 0;
}
