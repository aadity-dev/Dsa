class Solution {
  public:
    int merge(vector<int>& arr, int low, int mid, int high) 
    {
        vector<int> temp;
        int left = low; 
        int right = mid + 1;
        int count = 0;
        while(left <= mid && right <= high)
        {
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                count += (mid - left + 1);
                right++;
            }
        }
            while(left <= mid){
                temp.push_back(arr[left++]);
            }
            while(right <= high){
                temp.push_back(arr[right++]);
            }
            for(int i = low; i <= high; i++){
                arr[i] = temp[i - low];
            }
        return count;
    }
    int mergeSort(vector<int>& arr, int low, int high){
        if (low >= high) return 0;
            int mid = low + (high - low) / 2;
            int inversion = mergeSort(arr, low, mid);
            inversion += mergeSort(arr, mid + 1, high);
            inversion += merge(arr, low, mid, high);
            return inversion;
    }
    int inversionCount(vector<int> &arr) {
        if(arr.empty()) {
            return 0;
        }
        int low = 0;
        int high = arr.size() - 1;
        return mergeSort(arr, low, high);
    }
};