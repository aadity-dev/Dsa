#include <iostream>
using namespace std;

int subArrayZeroSum(int a[], int n) {
    int count = 0;
    for (int i = 0; i<n;i++) {
        int sum = 0;
        for (int j = i;j<n; j++){
            sum += a[j];
            if (sum==0){
                count++;
            }
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count = subArrayZeroSum(a,n);
    if (count > 0){
        cout<<"YES\n";
        cout << count;
    }
    else{
        cout <<"NO";
    }
    return 0;
}

