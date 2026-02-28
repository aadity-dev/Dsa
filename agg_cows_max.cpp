#include<iostream>
#include<vector>
#include <climits>
#include<algorithm>
using namespace std; 
int main()
{
    int n;cin>>n;
    int k;cin>>k;
    vector<int> arr(n);
    for(int i=0;i < n;i++)
    {
        cin >> arr[i];
    }
    int x = 0;
    vector<int> bestSubset;
    for(int i=0;i<(1<<n);i++) // 2^n-1  -->// 3 -3 combinations value of k = 3
    //6 
    //1 5 7 13 15 27
    //k = 1, 5 ,15 = 4,10 = min. = 4
    //k = 5, 13, 27 = 8,14 = min = 8 ans .max. (8)...
    {      
        vector<int> temp;
        for(int j =0;j<n;j++)
        {
            if((i & (1<<j)) != 0)
            {
                temp.push_back(arr[j]);
            }
        }
        if (temp.size() >= k) {
            sort(temp.begin(), temp.end());

            int minDist = INT_MAX;
            for (int i = 0; i + 1 < temp.size(); i++) {
                minDist = min(minDist, temp[i + 1] - temp[i]);
            }

            if (minDist > x) {
                x = minDist;
                bestSubset = temp;
            }
        }
    }
    cout << "Maximum minimum distance = " << x << endl;
    cout << "Cow positions (indices in original array): ";

    for (int val : bestSubset) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == val) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
      return 0;
}