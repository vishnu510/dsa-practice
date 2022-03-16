#include<iostream>
using namespace std;

// New Algorithm called Kadane's algo to find maximum subarray problem
int maximum_subarray_sum(int arr[],int n){
    int cs = 0;
    int largest = 0;
    for(int i =0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        largest = max(largest,cs);
    }
    return largest;
}

int main(){

    int arr[]={5,10,15,-20,25,30,-35,40,45};
    int n = sizeof(arr)/sizeof(int);
    cout<<maximum_subarray_sum(arr,n);
    return 0;
}