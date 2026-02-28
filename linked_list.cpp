#include<iostream>
using namespace std;

class Node
{
public:
int data;
Node* next;
Node* prev;
    Node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};


class Deque{
    Node* front;
    Node* rear;
    public:
    Deque(){
        front = nullptr;
        rear = nullptr;
    }
void push(int x){
    Node* temp = new Node(x);
    temp->next =front;
    if(front != nullptr){
        front->prev = temp;
    }
    else{
        rear = temp;
    }
    front = temp;
}
void pop(){
    if(front == nullptr){
        cout<<"EMpty";
        return;
    }
    Node* temp = front;
    front = front->next;
    if(front != nullptr){
        front->prev = nullptr;
    }else{
        rear = nullptr;
    }
    delete temp;
}

void popBack() {
    if (rear == NULL) {
        cout << "Deque is empty\n";
        return;
    }

    Node* temp = rear;
    rear = rear->prev;

    if (rear != NULL)
        rear->next = NULL;
    else
        front = NULL; 
    delete temp;
}

void display(){
    Node *curr = front;
    while(curr != nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
};

int main(){
    Deque dq;
    dq.push(10);
    dq.push(20);
    dq.push(30);
    dq.display();
    dq.pop();
    dq.popBack();
    dq.display();
    return 0;
}
