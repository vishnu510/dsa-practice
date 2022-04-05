#include <iostream>
using namespace std;

class ListNode {
   public:
    int data;
    ListNode* next;
    ListNode(int d) {
        data = d;
        next = NULL;
    }
};

int intersection_ll(ListNode*headA,ListNode*headB){
    int c1=0,c2=0,diff=0;
    ListNode* temp1 = headA;
    ListNode* temp2 = headB;
    while(headA!=NULL){
        c1++;
        temp1 = temp1->next;
    }
    while(headB!=NULL){
        c2++;
        temp2 = temp2->next;
    }

    diff  = abs(c1-c2);
    
    if(c1>c2){
        while(diff--){
            headA = headA->next;
        }
    }
    else{
        while(diff--){
            headB = headB->next;
        }
    }

    while(headA!=NULL and headB!=NULL){
        if(headA->data == headB->data){
            headA = headA->next;
            headB = headB->next;
            return headA->data;
        }
    }
    return -1;
}


void insertion_at_Tail(ListNode*& head, int data) {
    if (head == NULL) {
        ListNode* node = new ListNode(data);
        head = node;
        return;
    }
    ListNode* temp = head;
    ListNode* node = new ListNode(data);
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}
void insertion_at_head(ListNode*& head, int data) {
    if (head == NULL) {
        ListNode* node = new ListNode(data);
        head = node;
        return;
    }
    ListNode* node = new ListNode(data);
    node->next = head;
    head = node;
}

void print_ll(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main() {
    ListNode* headA = NULL;
    insertion_at_Tail(headA, 4);
    insertion_at_Tail(headA, 1);
    insertion_at_Tail(headA, 8);
    insertion_at_Tail(headA, 4);
    insertion_at_Tail(headA, 5);
    print_ll(headA);
    cout<<endl;
    ListNode* headB = NULL;
    insertion_at_Tail(headB, 5);
    insertion_at_Tail(headB, 4);
    insertion_at_Tail(headB, 3);
    insertion_at_Tail(headB, 44);
    insertion_at_head(headB,6);
    print_ll(headB);

    

    return 0;
}