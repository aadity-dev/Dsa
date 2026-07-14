class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        stack<int> st;
        vector<int> left(n);
        vector<int> right(n);
        int maxArea = 0;

        // find the previous smaller element
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i] = -1;
            }
            else{
                left[i] = st.top();
            }
            st.push(i);
        }

        while(!st.empty()){
            st.pop();
        }
        //find next smalller
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i] = n;
            }else{
                right[i] = st.top();
            }
            st.push(i);
        }
        
        for(int i=0;i<n;i++){
        maxArea = max(maxArea, heights[i] * (right[i] - left[i] - 1));
        }
        return maxArea;
    }
};