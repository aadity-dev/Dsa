class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++)
        {
            int l = i + 1;
            int r = nums.size()-1;
            int sum = target - nums[i];

            while(l <= r)
            {
                int mid =  l + (r - l) / 2;

                if (nums[mid] == sum){
                    return {i+1, mid+1};
                }
                else if(nums[mid] < sum){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        return {};
    }
};