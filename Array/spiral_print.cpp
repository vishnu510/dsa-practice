#include<iostream>
using namespace std;

void printArray(int arr[][4],int n,int m){
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    while(startCol<=endCol and startRow<=endRow){
        for(int col = startCol;col<=endCol;col++){
            cout<<arr[startRow][col]<<" ";
        }
        for(int row = startRow+1;row<=endRow;row++){
            cout<<arr[row][endCol]<<" ";
        }
        for(int col = endCol-1;col>=startCol;col++){
            if(startRow==endRow){
                break;
            }
            cout<<arr[endCol][col]<<" ";
        }
        for(int row = endRow-1;row>=startRow+1;row++){
            //Avoid duplicate printing of elements
            if(startCol==endCol){
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }

}

int main(){

    int arr[][4]={{1,2,3,4},
                  {12,13,14,5},
                  {11,15,16,6},
                  {10,9,8,7}};
    int n = 4,m = 4;   
    printArray(arr,n,m);           
    return 0;
}