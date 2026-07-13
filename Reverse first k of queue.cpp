class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> st;
        if(k > q.size()) return q;
        for(int i = 0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        for(int i = 0;i < q.size() - k;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};