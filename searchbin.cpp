#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == target)
        {
            cout<<"Element Found";
        }else if(arr[mid]< target)
        {
            low = mid + 1;
        }else
        {
            high = mid - 1;
        }
    }
        return -1;
}