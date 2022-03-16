#include<iostream>
using namespace std;

void printAllSubarr(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k =i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
     
    }
}

int main(){

    int arr[]={5,10,15,-20,25,30,-35,40,45};
    int n = sizeof(arr)/sizeof(int);

    printAllSubarr(arr,n);
    return 0;
}