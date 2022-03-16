#include<iostream>
using namespace std;

//Brute Force Approach
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
// Prefix Sum Approach
int Largest_SubArray_sum2(int arr[],int n){
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    int largestSum= 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subArrSum = i>0?prefix[j] - prefix[i-1]:prefix[j];
            largestSum = max(largestSum,subArrSum);
        }
     
    }
    return largestSum;
}

int main(){

    int arr[]={5,10,15,-20,25,30,-35,40,45};
    int n = sizeof(arr)/sizeof(int);

    cout<<Largest_SubArray_sum(arr,n);
    cout<<endl;
    cout<<Largest_SubArray_sum2(arr,n);
    
    return 0;
}