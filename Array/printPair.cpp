#include<iostream>
using namespace std;

void printAllpair(int arr[],int n){
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             cout<<arr[i]<<" "<<arr[j]<<endl;
         }
     }

}

int main(){
    
    int arr[]={5,10,15,20,25,30,35,40,45};
    int n = sizeof(arr)/sizeof(int);
    printAllpair(arr,n);
    return 0;
}