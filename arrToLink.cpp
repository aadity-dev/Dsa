#include<iostream>
using namespace std;
class Node
{
public:

int data;
Node* next;
    Node(int data){
        this->data = data;
       this->next = nullptr;
    }
};
Node* arrtoLink(int arr[],int n){
    if(n == 0){
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* curr = head;

    for(int i =1;i<n;i++){
        curr->next = new Node(arr[i]);
        curr = curr -> next;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    Node* head = arrtoLink(arr, n);
    cout << head;
    return 0;
    }