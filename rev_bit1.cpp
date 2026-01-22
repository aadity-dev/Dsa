#include <iostream>
using namespace std;

int main() {
    int n,bits;
    cin >> n >> bits;   

    int rev;
    int temp =n;

    for (int i = 0;  i<bits; i++) {
        rev = (rev << 1) | (temp & 1);
        temp >>= 1;
    }
    if (rev == n)
        cout << 1;
    else
        cout << -1;
    return 0;
}

