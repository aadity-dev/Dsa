
// Kevin And His Fruits
// Kevin has N buckets each consisting of some fruits. Kevin wants to eat at least M fruits and so, he decided to set a marker (integer) as maximum as possible such that if he eats number of fruits in the i-th bucket - marker fruits then it must be at least M.
// Note Each bucket may not have the same amount of fruits. It is guaranteed that the sum of all fruits (including all the buckets) will be greater than M. Kevin can only eat fruits from a particular bucket if and only if the bucket has more fruits than the marker.
// Input Format
// The first line will contain two space-separated integers N and M where N is the total number of buckets, and M is the minimum number of fruits that Kevin wants to eat.
// The second line will contain N space-separated integers which denote the number of fruits in the i-th bucket.
// Output Format
// Print the maximum possible value of the marker.
// Example 1
// Input
// 4 30
// 10 40 30 20
// Output
// 20
// Explanation
// If we set the marker at 20 then Kevin can eat following fruits from each bucket: 0 (1st
// bucket) + 20 (2nd bucket) + 10 (3rd bucket) + 0 (4th bucket) = 30 (K).
// 21
// 10
// sw(an)
// Example 2
// Input
// 4 16
// 5 8 20 1
// Output
//6
// Explanation
// If we set the marker at 6 then Kevin can eat following fruits from each bucket: 0 (1st
// bucket) + 2 (2nd bucket) + 14 (bucket) + 0 (4th bucket) = 16 (K)
// Constraints
// 1 <= N <= 10^4
// 1<= M <= 10^6
// 0 <= ARR] <= 10^4
#include<iostream>
#include<vector>
//#include<algorithum>

using namespace std;
int main(){
    int n;cin>>n;
    int m;cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>sum;
    int marker = 0;
    for(int i=0;i<n;i++){
        sum = arr[i+1]-arr[i];
    }
    int l = 0;
    int h = n-1;
    while(l<h){
        int mid = (h-l)/2;
        
    } 
}