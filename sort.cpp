// #include<iostream>
// // sort wihtout conssuming extra  space.
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++){
//         cin>>ar[i];
//     }
//     for(int i =1;i<n;i++){
//         int k = ar[i];
//         int j = i-1;
    
//     while(j >= 0 && ar[j] > k){
//         ar[j+1] = ar[j];
//         j--;
//     }
//     ar[j+1] = k;
//     }
    
//     for(int i =0;i<n;i++){
//         cout<< ar[i]<<" ";
//     }
//     for(int i= 0;i<n;i++){
//         cout<<
//     }
//     return 0;
// } // o(n) //insertion sort..

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1) {
            mid++;
        }
        else {
            swap(a[mid], a[high]);
            high--;
        }
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}