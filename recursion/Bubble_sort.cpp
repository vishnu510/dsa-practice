#include<bits/stdc++.h>
using namespace std;



void buble_sort_rec(int a[],int n){
    if(n==1){
        return;
    }
    for(int j=0;j<n-1;j++){
     if(a[j]>a[j+1]){
         swap(a[j],a[j+1]);
     }
    }
    buble_sort_rec(a,n-1);
}
void buble_sort_rec2(int a[],int n,int j){
    if(n==1){
        return;
    }
    if(j==n-1){
       buble_sort_rec2(a,n-1,0);
       return;
    }
     if(a[j]>a[j+1]){
         swap(a[j],a[j+1]);
     }
    buble_sort_rec2(a,n,j+1);
}

int main(){
    int arr[]={40,39,40,9,7,53,41,61,63};
    int size = sizeof(arr)/sizeof(int);
    buble_sort_rec(arr,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    buble_sort_rec2(arr,size-1,1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}