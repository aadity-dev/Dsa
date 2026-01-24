#include <iostream>
using namespace std;

bool subArrayZeroSum(int a[], int n) {
    for (int i = 0; i<n;i++) {
        int sum = 0;
        for (int j = i;j <n; j++) {
            sum += a[j];
            if (sum==0)
                return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (subArrayZeroSum(a,n))
        cout<<"YES";
    else
        cout <<"NO";
    return 0;
}
