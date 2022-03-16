#include<iostream>
using namespace std;

int Largest_SubArray_sum(int arr[],int n){
    int largestSum= 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarrSum = 0;
            for(int k =i;k<=j;k++){
                subarrSum+=arr[k];
            }
            largestSum = max(largestSum,subarrSum);
        }
     
    }
    return largestSum;
}

int main(){

    int arr[]={5,10,15,-20,25,30,-35,40,45};
    int n = sizeof(arr)/sizeof(int);

    cout<<Largest_SubArray_sum(arr,n);
    return 0;
}