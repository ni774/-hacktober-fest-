#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    struct node *left=NULL;
    struct node *right=NULL;
};
bool sameTree(node *root1,node *root2){
    if(root1==NULL && root2==NULL)
       return true;
    if(root1==NULL || root2==NULL)
       return false;
    if(root1->value==root2->value && sameTree(root1->left,root2->left) && sameTree(root1->right,root2->right))
       return true;
}

int main(){
    //Making 1st tree
    node *root1=new node();
    root1->value=67;
     node *a=new node();
    root1->left=a;                           //              67 root1
    a->value=23;                            //            /    \               tree
     node *b=new node();                   //         'a'23      78 'b'
    root1->right=b;                         //          /  \      /
    b->value=78;                           //     'c'65 'd'44   34'e'
     node *c=new node();
    a->left=c;
    c->value=65;
     node *d=new node();
    a->right=d;
    d->value=44;
     node *e=new node();
    e->value=34;
    b->left=e;

    //Making 2nd Tree
    node *root2=new node();
    root2->value=67;
     node *a1=new node();
    root2->left=a1;                           //              67 root2
    a1->value=23;                            //            /    \               tree
     node *b1=new node();                   //         'a'23      78 'b'
    root2->right=b1;                         //          /  \      /
    b1->value=78;                           //     'c'65 'd'44   35'e'
     node *c1=new node();
    a1->left=c1;
    c1->value=65;
     node *d1=new node();
    a1->right=d1;
    d1->value=44;
     node *e1=new node();
    e1->value=35;
    b1->left=e1;
  
  //call compare function to check wether both tree are same or not

   if(sameTree(root1,root2))
       cout<<"Trees are same"<<endl;
    else
    {
       cout<<"Trees are diffrent"<<endl;
    }
    

}