#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node * left;
  Node * right;
  Node(int d){
      data = d;
      left = right = NULL;
  }
};

Node * buildTree(){
 int d;
 cin>>d;
 if(d==-1){
 return NULL;
 }
 Node* n = new Node(d);
 n->left = buildTree();
 n->right =  buildTree();
 return n;
}

void printPreOrder(Node* root){
  if(root==NULL){
    return; 
  }

  printPreOrder(root->left);
  cout<<root->data<<",";
  printPreOrder(root->right);
  

}
int main(){
    Node*root = buildTree();
    printPreOrder(root);
}