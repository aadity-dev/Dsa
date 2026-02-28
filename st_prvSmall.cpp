#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this ->next = nullptr;
    }
    
};

class Stack
{
    private:
    Node* head;
    int size;
    public:
    Stack(){
    head = nullptr;
    size = 0;
    }

void push(int val){
   Node* newNode = new Node(val);
   newNode->next = head;
   head = newNode;
   size++;
}

int pop(){
    if(size == 0){
        cout<<"empty \n";
        return -1;
    }
    int val = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    size--;
    return val;
}
int top(){
    if(size == 0){
        return -1;
    }
    return head->data;
}
int getSize()
{
    return size;
}
};
int main (){
    int n;
    cin>>n;
    int arr[n];
    int res[n];
    
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    Stack st;
    res[0] = -1;
    st.push(arr[0]);
    for(int i = 1;i<n;i++){
        while(st.getSize() != 0 && st.top() >= arr[i]){
            st.pop();
        }
        res[i] = (st.getSize() == 0) ? -1 : st.top();
        st.push(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout<<res[i] << " ";
    }
}