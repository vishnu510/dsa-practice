#include<iostream>
using namespace std;


pair<int ,int> stairCaseSearch(int arr[][4],int n,int m,int key){

    if(key < arr[0][0] or key > arr[n-1][m-1]){
        return {-1,-1};
    }
    //implement stairCaseSearch method
    int i = 0;
    int j = m-1;
    while(i <= n-1 and j >=0){
         
         if(arr[i][j] ==key){
             return {i,j};
         }
         else if(arr[i][j]> key){
             j--;
         }
         else
         i++;
    }
    return {-1,-1};
}
int main(){

    int arr[][4]={{1,2,3,4},
                  {12,13,14,5},
                  {11,15,16,6},
                  {10,9,8,7}};
    int n = 4,m = 4;   

    pair<int,int> coords = stairCaseSearch(arr,n,m,8);
    cout<<coords.first<<" "<<coords.second<<endl;
    return 0;
}