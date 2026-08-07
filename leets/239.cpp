class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> ans; 
        for(int i = 0;i <= nums.size() - k;i++){
            vector<int> temp;
            for(int j = i;j < i + k;j++){
                temp.push_back(nums[j]);
            }
                int max_val = *max_element(temp.begin(), temp.end());
                ans.push_back(max_val);
        }   
        return ans;
    }
};//tle