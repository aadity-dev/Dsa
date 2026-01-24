#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int Second(int a[], int n, int out[]) {
    int k = 0;

    for (int i = 0; i < n; i++) {

        int v = abs(a[i]) - 1;

        if (a[v] < 0) {          // 2nd time
            out[k++] = v + 1;
            a[v] = 0;          
        }
        else if (a[v] > 0) {     // 1 st time
            a[v] = -a[v];
        }
    }
    return k;
}

int main() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int out[n/2];

    int cnt = Second(a, n, out);

    for (int i = 0; i < cnt; i++)
        cout << out[i] << " ";
}
