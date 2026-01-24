#include<iostream>
#include<algorithm>
using namespace std;
void twoSum(int n,int target, int arr[]){
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == target){
               cout<< i << " "<<j;
               return;
            }
        }  
    }
    cout<<-1;
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    twoSum(n, target, arr);
    return 0;
}