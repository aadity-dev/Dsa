class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prevSum;
        prevSum[0] = 1;
        int sum = 0;
        int count = 0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            if (prevSum.find(sum - k) != prevSum.end()) {
                count += prevSum[sum - k];
            }
            prevSum[sum]++;
        }
        return count;
    }
};