#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int maxFreq = 0;
        int mostFrequent = -1;
        for (int j = i + 1; j < n; j++) {
            int count = 0;

            for (int k = i + 1; k < n; k++) {
                if (arr[j] == arr[k])
                    count++;
            }

            if (count > maxFreq) {
                maxFreq = count;
                mostFrequent = arr[j];
            }
        }

        if (mostFrequent == -1)
            cout << "Index " << i << " → No elements on right\n";
        else
            cout << "Index " << i
                 << " → Most frequent on right: "
                 << mostFrequent
                 << " (count = " << maxFreq << ")\n";
    }

    return 0;
}

