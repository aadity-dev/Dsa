#include<iostream>
using namespace std:
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
Node* arrayToList(int arr[],int n){
    if(n == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* curr = head;
    for(int i =1;i<n;i++){
        curr->next = new Node(arr[i]);
        Node* curr = head;
    }

}
