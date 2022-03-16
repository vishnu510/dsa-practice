#include<iostream>
using namespace std;

int printrev(int arr[],int n){
   int start = 0;
   int end = n-1;
   while(start<end){
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
}

int main(){

      int arr[]={5,10,15,20,25,30,35,40,45};
      int n = sizeof(arr)/sizeof(int);
      printrev(arr,n); 

      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;


    return 0;
}