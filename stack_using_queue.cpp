// class MyStack {
//     queue<int> q;
// public:
//     MyStack() { }
//     void push(int x) {
//         q.push(x);
//         for(int i = 0; i<q.size() - 1; i++){
//             q.push(q.front());
//             q.pop();
//         }
//     }
//     int pop() {
//         int temp = q.front();
//         q.pop();
//         return temp;
//     }
//     int top() {
//         return q.front();
//     }
//     bool empty() {
//         return q.empty();
//     }
// };

class myStack {
    queue<int> q;
    queue<int> qemp;
  public:
    void push(int x) {
        // Inserts an element x at the top of the stack
        qemp.push(x);
        
        while(!q.empty()){
            qemp.push(q.front());
            q.pop();
        }
        //swap
        swap(q, qemp);
    }

    void pop() {
        // Removes an element from the top of the stack
        if(!q.empty()){
            q.pop();
        }
    }
    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(!q.empty()){
            return q.front();
        }
        return -1;
    }

    int size() {
        // Returns the current size of the stack
        return q.size();
    }
};
