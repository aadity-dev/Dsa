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
            cout<<num[i-1]<<" apppears "<<count<<" times\n";
            if(count == 2) {
                cout << "→ appears twice: " << num[i-1] << endl;
        }
        count = 1;
        }
    }
    cout << num[n-1] << " appears " << count << " times\n";
    if(count == 2) {
        cout << "→ appears twice: " << num[n-1] << endl;
    }
    return 0;
}
