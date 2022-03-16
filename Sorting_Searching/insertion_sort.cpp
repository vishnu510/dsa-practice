#include<iostream>
using namespace std;

void insertion_sort(int array[],int n){
   for(int i=1;i<=n-1;i++){
       int current = array[i];
       int previous = i-1;
       while(previous>=0 and array[previous]>current){
           array[previous+1] = array[previous];
           previous = previous -1;
       }
       array[previous+1] = current;
   }
}

int main(){
    int array[] = {5,3,-2,6,4,-1,13,11,14,19,-12,15};
    int n = sizeof(array)/sizeof(int);
    insertion_sort(array,n);
    for( auto x:array){
        cout<<x<<",";
    }
    return 0;
}