#include<iostream>
using namespace std;

//sort the element in increasing order
void selection_sort(int array[],int n){
 for(int pos = 0;pos<=n-2;pos++){
     int current = array[pos];
     int min_position = pos;

     // find min of the array
     for(int j=pos;j<n;j++){
         if(array[j]<array[min_position]){
             min_position = j;
         }
     }
     swap(array[min_position],array[pos]);
 }
}

int main(){
    int array[] = {5,3,-2,6,4,-1,13,11,14,19,-12,15};
    int n = sizeof(array)/sizeof(int);
    selection_sort(array,n);
    for( auto x:array){
        cout<<x<<",";
    }
    return 0;
}