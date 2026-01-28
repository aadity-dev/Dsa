class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        for(int i=0;i<n;i++){ 
            nums1[m+i] = nums2[i]; //num1[3 + 0] = num2[3] == 2 and same for other and sort ...
        }
        sort(nums1.begin(),nums1.end());
    }
};