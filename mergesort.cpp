
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
public:
    // Function to merge two halves of the array
    void merge(vector<int>& arr, int low, int mid, int high) 
    {
        // Create temp arrays
        vector<int> temp;
        int left = low; 
        int right = mid + 1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
            while(left <= mid){
                temp.push_back(arr[left++]);
            }
            while(right <= high){
                temp.push_back(arr[right++]);
            }
            for(int i = low;i <= high;i++){
                arr[i] = temp[i-low];
            }
    }

    // Recursive merge sort function
    void mergeSort(vector<int>& arr, int low, int high){
        if (low >= high)
            return;
            int mid = low + (high - low)/2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid+1, high);
            merge(arr, low, mid, high);
    }
};


int main() {
    vector<int> arr = {5, 2, 8, 4, 1};
    Solution sol;
    sol.mergeSort(arr, 0, arr.size() - 1);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}
