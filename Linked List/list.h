class List;
class Node{
    public:
    int data;
    Node* next;
    Node(int d) : data(d),next(NULL){}
    int getData(){
        return data;
    } 
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

    // Insert data in linked list on given position
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
            return;
        }
        //otherwise
        Node * temp = head;
        for(int jump =1;jump<=pos-1;jump++){
            temp =temp->next;
        }
        Node* n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
};
