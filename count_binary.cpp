#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    int count = -1;
    while(low<= high){
        int mid = low + (high-low)/2;
    if(arr[mid] == 1){
        count = mid; 
        high = mid - 1; 
    }else{
         low = mid + 1;
    }
}
    int ones, zeros;
    if (count == -1) {
        ones = 0;
        zeros = n;
    }else{
        ones = n - count;
        zeros = count;
    }
    cout << "Ones: "<<ones<<"\nZeros: "<< zeros;
    return 0;
}
