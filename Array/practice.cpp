#include<iostream>
using namespace std;

int main(){
    char sentence[1000];
    char temp = cin.get();
    int len = 0;
    while(temp!='\n'){
        sentence[len++]=temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout<<"Length "<<len<<endl;
    cout<<sentence<<endl;


    // Given a sentence,count the number of digit ,alphabets and spaces in the sentence
    char ch;
    ch = cin.get();
    int alpha = 0;
    int space = 0;
    int digit = 0; 

    while(ch!='\n'){
        if(ch>='0' and ch <= '9'){
            digit++;
        }
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
            space++;
        }
        ch = cin.get();
    }
    cout<<"Total Alphabets "<<alpha<<endl;
    cout<<"Total spaces "<<space<<endl;
    cout<<"Total digits "<<digit<<endl;

    // another method getline() function

    char sen[1000];
    cin.getline(sen,1000);
    cout<<sen<<endl;

    // reading paragraph
    char paragraph[1000];
    cin.getline(paragraph,1000,'.');
    cout<<paragraph<<endl;
}