class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        double p_sum = 0;
        for(int i = 0 ;i<k;i++)
        {
            p_sum = p_sum + nums[i];
        }
            double max_sum = p_sum;
            for(int i = k;i<nums.size();i++)
            {
               p_sum += nums[i];
               p_sum -= nums[i - k];
               if(max_sum < p_sum){
                max_sum = p_sum;
               }
            }
        return max_sum/k;
    }
};