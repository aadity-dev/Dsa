#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    int count = 1;
    for(int i=1;i<n;i++)
    {
        if(num[i] == num[i-1]){
            count++;
        }
        else {
            if(count == 2) {
                cout << num[i-1];
        }
        count = 1;
        }
    }
    return 0;
}
