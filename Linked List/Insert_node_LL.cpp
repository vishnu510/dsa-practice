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
void print_ll(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main() {
    ListNode* head = NULL;
    insertion_at_Tail(head, 1);
    insertion_at_Tail(head, 2);
    insertion_at_Tail(head, 3);
    insertion_at_Tail(head, 4);
    insertion_at_Tail(head, 5);
    print_ll(head);

    

    return 0;
}