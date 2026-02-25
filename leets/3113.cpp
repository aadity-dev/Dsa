//brute force appproch
class Solution {
public:
    long long numberOfSubarrays(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            for(int j = i;j < nums.size();j++){
                int maxm = nums[i];
                for(int k = i;k <= j;k++){
                    maxm = max(maxm, nums[k]);
                }

                if(nums[i] == maxm && nums[j] == maxm){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};