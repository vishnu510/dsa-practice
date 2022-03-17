#include<bits/stdc++.h>
using namespace std;


string compress_string(string s){
    int n = s.length();
    string output;
    for(int i=0;i<n;i++){
        int count = 1;
        while(i<n-1 and s[i+1]==s[i]){
            count++;
            i++;
        }
        output+=s[i];
        output += to_string(count);
    }
    if(s.length() > output.length()){
        return output;
    }
    else
    return s;
}

int main(){
    string s1 = "aaabbbcceedd";
    cout<<compress_string(s1);
    cout<<endl;
    string s2 = "abcd";
    cout<<compress_string(s2);
    
    return 0;
}