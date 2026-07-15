#include<iostream>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        this->data = x;
        left = nullptr;
        right = nullptr;
    }
}


void preorder(Node* root){
    
}


int main() {

    Node* root = new Node(10);
    cout << root->data << endl;
    return 0;

}
