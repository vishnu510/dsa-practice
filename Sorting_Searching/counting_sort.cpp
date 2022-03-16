#include<bits/stdc++.h>
using namespace std;

//sort the element in increasing order
void counting_sort(int array[],int n){
    //Largest Element
    int largest = -1;
    for(int i =0;i<n;i++){
        largest = max(largest,array[i]);
    }
    //create a count array/vector
    vector<int> freq(largest+1,0);
    //update the freq array
    for(int x =0;x<n;x++){
        freq[array[x]]++;
    }
    int j=0;
    for(int i=0;i<=largest;i++){
       while(freq[i]>0){
           array[j]=i;
           freq[i]--;
           j++;
       }
    }
 return;
}

int main(){
    int array[] = {5,3,2,6,4,1,13,11,14,19,12,15};
    int n = sizeof(array)/sizeof(int);
    counting_sort(array,n);
    for( auto x:array){
        cout<<x<<",";
    }
    return 0;
}