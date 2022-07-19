#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    struct node *left=NULL;
    struct node *right=NULL;
};
void inorder(struct node *root){
    if(root==NULL)
       return;
     cout<<root->value<<" ";
    inorder(root->left);
    inorder(root->right);
}
void printpreorder(node *root){ 
    stack< node *>s;
    node *curr=root;
    // s.push(curr->right);
    // cout<<s.top()->value;
   while(curr!=NULL||s.empty()==false){
       while(curr!=NULL){
           s.push(curr);
           curr=curr->left;
       }
       curr=s.top();
       s.pop();
       cout<<curr->value<<" ";
       curr=curr->right;
   }  
}
void printleaf(node *root)
{
    if(root->left==NULL && root->right==NULL){
        cout<<root->value<<" ";
        return;
    }
    printleaf(root->left);
    printleaf(root->right);
}
void levelOrder(node *root){
    node *temp;
    queue<node *>q;
    if(!root)
       return;
    q.push(root);
    while(q.empty()==false){
        temp=q.front();
        q.pop();
        cout<<temp->value<<" ";
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
     
    }
}
int maxelement(node *root)    //breath first search
{
    node *temp;
    queue<node *>q;
    int num=0;
    if(!root)
        return 0;
    q.push(root);
    while(!q.empty()){
         temp=q.front();
         q.pop();
         num=max(num,temp->value);
         if(temp->left!=NULL)
            q.push(temp->left);
         if(temp->right!=NULL)
            q.push(temp->right);
    }
    return num;    
}
int minlement(node *root)    //breath first search
{
    node *temp;
    queue<node *>q;
    int num=temp->value;
    if(!root)
        return 0;
    q.push(root);
    while(!q.empty()){
         temp=q.front();
         q.pop();
         num=min(num,temp->value);
         if(temp->left!=NULL)
            q.push(temp->left);
         if(temp->right!=NULL)
            q.push(temp->right);
    }
    return num;     
 }
 int search(node *root,int data){
      if(root==NULL)
         return 0 ;
      else{
          if(root->value==data){
              return 1;
          }
          else{
            if(search(root->left,data)==1)
                return 1;
            else
               return search(root->right,data);
          }
      }
       return 0;
 }

int main()
{
     node *root=new node();
    root->value=67;
     node *a=new node();
    root->left=a;                           //              67 root
    a->value=23;                            //            /    \               tree
     node *b=new node();                   //         'a'23      78 'b'
    root->right=b;                         //          /  \      /
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
   
   cout<<"inorder dFS-->"<<endl;
   inorder(root);
   cout<<endl;
   cout<<"printpriorder using Iterator-->"<<endl;
   printpreorder(root);
   cout<<endl;
// printleaf(root);
   cout<<"Level order using Iterator-->"<<endl;
   levelOrder(root);
   cout<<endl;
   cout<<"Max element in tree-->"<<maxelement(root);
   cout<<endl;
   cout<<"min element in tree-->"<<minlement(root);
    if(search(root,374)==1)
      cout<<"true";
    else
       cout<<"false";
    
     
    return 0;

}