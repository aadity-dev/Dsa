#include<iostream>
using namespace std;

int bin_Search_inc(int arr[], int n,int target)
{
    int l =0;
    int h = n-1;
    while(l<=h)
    {
        int mid = l + (h - l)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid]>target) {
            h = mid -1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}
int bin_Search_dec(int arr[], int n, int target){
    int l = 0;
    int h = n-1;
    while(l<=h){
    int mid = l +(h - l)/2;
    if(arr[mid] == target)
    {
        return mid;
    }
    else if(arr[mid]<target){h = mid -1;}
    else {l = mid +1;}
}
return -1;
}
int main(){
 int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];  
    }
    int inc = bin_Search_inc(arr, n,target);
    int dec = bin_Search_dec(arr,n,target);
    if(inc != -1)
        cout<<"found in inc.. part"<<inc << endl;
    else if(dec != -1)
        cout << "found in decr.. part " << dec << endl;
    else
        cout << "Element not found" <<endl;
    return 0;
}