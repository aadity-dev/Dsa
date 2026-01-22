
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // n should be odd

    int mid = n / 2;

    // Upper half (including middle)
    for (int i = 0; i <= mid; i++) {
        // spaces
        for (int s = 0; s < mid - i; s++)
            cout << " ";

        // stars
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = mid - 1; i >= 0; i--) {
        // spaces
        for (int s = 0; s < mid - i; s++)
            cout << " ";

        // stars
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
