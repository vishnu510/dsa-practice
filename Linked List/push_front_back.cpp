#include<iostream>
using namespace std;

class List;
class Node{
    public:
    int data;
    Node* next;
    Node(int d) : data(d),next(NULL){}
    int getData(){
        return data;
    } 

    friend class List;
};
class List{
    Node* head;
    Node* tail;
    public:
    List() : head(NULL),tail(NULL){}

    // pushing data in linked list at front
    void push_front(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head  = tail  = n;
        }
        else{
            Node* n =new Node(data);
            n->next = head;
            head = n;
        }
    }

    // pushing data in linked list at back

    void push_back(int data){
       if(head==NULL){
           Node* n = new Node(data);
           n->next = head;
           head  = tail = n;
       }
       else{
           Node* n = new Node(data);
           tail->next = n;
           tail = n;
       }
    }
};


int main(){
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(2);

    Node* head = l.begin();
    while(head!=NULL){
        cout<<head->getData()<<"->";
        head = head->next;
    }
    return 0;
}