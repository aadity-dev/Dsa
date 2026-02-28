#include<iostream>
#include<vector>
// to print all possible combinations.

using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i < n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<(1<<n);i++) // 2^n-1 
    {      
        vector<int> temp;
        for(int j =0;j<n;j++)
        {
            if((i & (1<<j)) != 0)
            {
                temp.push_back(arr[j]);
            }
        }
        for(int x : temp)
        {
            cout << x<< " " ;
        }
            cout<<endl;
    }
      return 0;
}