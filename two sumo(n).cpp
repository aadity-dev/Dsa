#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    int val[n], idx[n];
    for (int i = 0; i < n; i++) {
        cin >> val[i];
        idx[i] = i; 
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (val[i] > val[j]) {
                swap(val[i], val[j]);
                swap(idx[i], idx[j]);
            }
        }
    }
    int l = 0, r = n - 1;
    while (l < r) {
        int sum = val[l] + val[r];
        if (sum == target) {
            cout << idx[l] << " " << idx[r];
            return 0;
        }
        if (sum < target) l++;
        else r--;
    }

    cout << "-1";
    return 0;
}
