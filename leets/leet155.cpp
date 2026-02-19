class MinStack {
public:
    MinStack() {}
    stack<long long> st;
    long long minm = INT_MAX;
    void push(int val) {
        if(st.empty()){
            minm = val;
            st.push(val);
        }else{
            if(val >= minm){
                st.push(val);
            }else{
                st.push(2LL * val - minm);
                minm = val;
            }
        }
    }
    void pop() {
        if(st.empty()){
            return;
        }else{
            long long x = st.top();
            st.pop();
            if(x < minm){
                minm = 2 * minm - x;
            }
        }
    } 
    int top() {

        if(st.empty()){
            return 0;
        }else{
           long long x = st.top();
            if(x < minm) return (int)minm;
            else return (int)x;
        }
    }
    int getMin() {
        return minm;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */