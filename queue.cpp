#include<iostream>
using namespace std;
class Node(){
    int data;
    Node *next;
}

class queue{
    Node *front, *rear;
    public:
     Queue() {
        front = rear = NULL;
    }
    bool isempty(){
        return front == NULL;
    }

    Void enqueue(int x){
        Node *front = new Node();
        newNode->data = x;
        newNode>next = NULL;
        if(rear == nullptr){
            front = rear = newNode;
        }
        rear->next = newNode;
        newNode = nullptr;
    }
    int dequeue(){
        if(isempty()){
            cout<<"Underflown";
            return 1;
        }
        Node* temp = front;
        front = front->next;
        if(front == NULL){
            rear = nullptr;
        }
        delete temp;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue Empty\n";
            return -1;
        }
        return front->data;
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue Empty\n";
            return;
        }

        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.peek();
    return 0;
}
