#include<iostream>
using namespace std;
int main(){
 int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int low=0;
    int high = n - 1;
    while(low < high)
    {
        int mid = low + (low+high)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){//1 3 4 9 5  7 
            return arr[mid];
        }
        if(arr[mid] < arr[mid + 1]){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    cout<<arr[low];
    return 0;
}
    int bin_Search_inc(MountainArray &arr, int start, int end, int target) {
        int l = start;
        int h = end;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            int midVal = arr.get(mid);
            if (midVal == target) {
                return mid;
            } else if (midVal > target) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }
    
    int bin_Search_dec(MountainArray &arr, int start, int end, int target) {
        int l = start;
        int h = end;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            int midVal = arr.get(mid);
            if (midVal == target) {
                return mid;
            } else if (midVal < target) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int peak = peakElement(mountainArr);  // Call peakElement with parameter
        
        // Search in increasing part (from 0 to peak)
        int result = bin_Search_inc(mountainArr, 0, peak, target);
        if (result != -1) {
            return result;
        }
        
        // Search in decreasing part (from peak+1 to n-1)
        return bin_Search_dec(mountainArr, peak + 1, n - 1, target);
    }
};
