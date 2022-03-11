#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            return i;

        }
    }
     return -1;

}

int main(){
    int arr[] = {1,5,9,8,2,6,8,6,8,100};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = linearSearch(arr,n,key);
    if(index!=-1){
        cout<<key<<"is present at index number:"<<index;
    }
    else{
        cout<<key<<"IS NOT FOUND"<<index;
    }
    return 0;
}