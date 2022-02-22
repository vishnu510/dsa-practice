#include<iostream>
using namespace std;

int linearSearch(int arr[],int key){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            return arr[i];

        }
        else
        return -1;
    }

}

int main(){
    int arr[10] = {1,5,9,8,2,6,8,6,8,100};
    int key;
    cin>>key;
    cout<<linearSearch(arr,key);
    return 0;
}