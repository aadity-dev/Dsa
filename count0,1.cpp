//0 0 0 1 1 1 0 0 1 1
//value of zero and one  and longest length of sub arr in o(n).
#include <iostream>
using namespace std;
int subArrayZeroSum(int arr[], int n) {
    int count = 0;
    for (int i = 0; i<n;i++) {
        int sum = 0;
        for (int j = i;j<n; j++){
            sum += arr[j];
            if (sum==0){
                count++;
            }
        }
    }
    return count;
}
int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = subArrayZeroSum(arr,n);
    if(count>0){
        cout<<count<<"\n";
    }
    unordered_map<int, int> mp;
    int pre = 0;
    int maxLen = 0;
    mp[0] = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0){
            pre += -1;
        }
        else{
            pre += 1;
        }
        if (mp.find(pre) != mp.end()){
            maxLen = max(maxLen, i - mp[pre]);
        } else {
            mp[pre] = i;
        }
        cout<<maxLen<<endl;
    }

    return 0;
}
// // 

// #include<iostream>
// #include<climits>

// int max_len(int arr[], int n){
//     int count_0 = 0;
//     int count_1 = 0;
//     int ans = 0;
//     std::unordered_map<int, int> map;
//     map[0] = -1;

//     for(int i = 0; i < n; i++){
//         if(arr[i] == 0){
//             count_0++;
//         }
//         else{
//             count_1++;
//         }
//         int diff = count_1 - count_0;

//         if(map.find(diff) != map.end()){
//             if(i - map[diff] > ans){
//                 ans = i - map[diff];
//             }
//         }
//         else{
//             map[diff] = i;
//         }
//     }
//     return ans;
// }

// int main(){
//     int arr[] = {0, 0, 0, 1, 1, 0, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     std::cout << max_len(arr, n) << "\n";
// }