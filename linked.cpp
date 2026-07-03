#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    



    void insertAtpos(Node* head, int pos, int val){
        Node* node = new Node(val);
        if(pos == 1){
            node->next = head;
            head = node;
            return;
        }
        Node* temp = head;
        for(int i=0; i < pos - 1 && temp != NULL;i++){
            temp = temp-> next;
        }
        node -> next = temp->next;
        temp->next = node;
    }



    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void even(int data){
        Node* temp = head;
        while(temp != nullpt){
        if(temp->val % 2 == 0){
            cout << temp->val << " ->";
            
        }
        temp = temp->next;
        
    }


    void printList() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList myList;
    myList.append(10);
    myList.append(20);
    myList.append(30);
    myList.printList();
    return 0;
}
