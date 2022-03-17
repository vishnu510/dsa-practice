#include<bits/stdc++.h>
using namespace std;

int main(){
    char route[1000];
    cin.getline(route,1000);
    int x=0,y=0;
    for(int i=0;route[i]!='\0';i++){
       switch (route[i])
       {
       case 'N': y++;
                 break;
       case 'S': y--;
                 break;
       case 'E': x++;
                 break;
       case 'W': x--;
                 break;
       }
    }
    cout<<"Final x and y is:"<<x<<","<<y<<".";
    
    if(x>=0 and y>=0){
      while(y--){
         cout<<"N";
      }
      while(x--){
         cout<<"E";
      }
    }

    // New Approach to find largest sentence among the sentence
    int n;
    cin>>n;
    cin.get();
    char sent[1000];
    char largest[1000];
    int largest_len = 0;
    while(n--){
        cin.getline(sent,1000);
        int len = strlen(sent);
        if(len>largest_len){
            largest_len = len;
            strcpy(largest,sent);
        }
    }
    cout<<"Largest sentence is :"<<largest<<endl;
    return 0;
}