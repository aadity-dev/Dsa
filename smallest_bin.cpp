// in  a sorted arr.incr. array find the smmallest elemtne which is greater than given element not equal.
#include<iostream>
using namespace std;
int main(){
 int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int low=0;
    int high = n - 1;
    int ans =-1;
    while(low < high)
    {
        int mid = low+(high - low)/2;
        if(arr[mid] > target)
        {
           ans =  arr[mid];
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    cout<<arr[ans];
    return 0;
}