
class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        
        stack<int> st;
        int n = q.size() /2;
        for(int i=0;i<n;i++){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        //push first half element in stack
        for(int i=0;i<n;i++){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    }
};