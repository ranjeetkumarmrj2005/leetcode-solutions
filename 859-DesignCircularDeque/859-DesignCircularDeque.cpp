// Last updated: 7/8/2026, 6:48:57 PM
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class MyCircularDeque {
public:
    Node* head;
    Node* tail;
    int s; // current size
    int c; // capacity
    MyCircularDeque(int k) {
        head = nullptr;
        tail = nullptr;
        s = 0;
        c = k;
    };
    bool insertFront(int value) {
        if(s==c) return false;
        else{
            Node* temp=new Node(value);
            if(s==0) head=tail=temp;
            else{
                temp->next=head;
                head->prev=temp;
                head=temp;
            }
            s++;
        }
        return true;
    }
    bool insertLast(int value) {
        if (s == c) return false;
        Node* temp = new Node(value);
        if (s == 0) {
            head = tail = temp;
        } 
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
        return true;
    }
    bool deleteFront() {
        if(s==0) return false;
        Node* temp=head;
        if(head==tail) head=tail=NULL;
        else{
            head=head->next;
            head->prev=NULL;
        } 
        s--;
        return true;
    }
    bool deleteLast() {
        if(s==0) return false;
        Node* temp=tail;
        if(head==tail) head=tail=NULL;
        else{
            tail=tail->prev;
            tail->next=NULL;
        }
        s--;
        return true;
    }
    int getFront() {
        if(s==0) return -1;
        else return head->val; 
    }
    int getRear() {
        if(s==0) return -1;
        else return tail->val;
    }
    bool isEmpty() {
        if(s==0) return true;
        else return false;
    }
    bool isFull() {
        if(s==c) return true;
        else return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */