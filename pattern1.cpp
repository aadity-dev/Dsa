
// #include <iostream>
// using namespace std;
// int main() {
//     int n ;
//     cin>>n;
//     string s = "abcdef";
//    for(int i = 0;i<n;i++){
//         for(int j= i;j<i; j++){
//      cout << s.substr(0, i)<<" "<<endl;
//         }
//    }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    string s = "abcdefghij";
    int index = 0;

    for (int len = 1; index + len <= s.length(); len++) {
        cout << s.substr(index, len) << endl;
        index += len;
    }

    return 0;
}
