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
 using extra space 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int arr[m+n]; 
        int index = 0;
        int i = 0;
        int j = 0;
        while(i<m && j < n){
        if(nums1[i] < nums2[j]){
            arr[index] = nums1[i];
            index++;
            i++;
        }else {
            arr[index] = nums2[j];
            index++;
            j++;
        }
        }
        while (i < m) {
            arr[index++] = nums1[i++];
        }
        while (j < n) {
            arr[index++] = nums2[j++];
        }
        for(int k = 0;k < m+ n;k++)
        {
            nums1[k] = arr[k];
        }
    }
};