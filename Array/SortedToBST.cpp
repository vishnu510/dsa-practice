#include<iostream>
#include<algorithm>
using namespace std;

struct Node{
    int data;
    Node *left ,*right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* SortedArrToBST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
  int mid = (start + end)/2;
  Node* root = new Node(arr[mid]);
  root->left = SortedArrToBST(arr,start,mid-1);
  root->right = SortedArrToBST(arr,mid+1,end);
  return root;
}

 void preorderPrint(Node *root){
     if(root==NULL){
         return;
     }
     else{
         cout<<root->data<<" ";
         preorderPrint(root->left);
         preorderPrint(root->right);
     }
 }

int main(){
     int arr[]={10,20,30,40,50};
     Node* root = SortedArrToBST(arr,0,4);
     preorderPrint(root);
     cout<<endl;
    return 0;
}