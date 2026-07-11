#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;
    Queue() {
        front = rear = -1;
    }
    void enqueue(int x) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow";
            return;
        }
        cout << "Removed: " << arr[front++] << endl;
    }
    void peek() {
        if (front == -1) cout << "Empty\n";
        else cout << "Front: " << arr[front] << endl;
    }
};