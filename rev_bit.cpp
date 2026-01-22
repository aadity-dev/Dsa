#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    cout << bitset<8>(n) ;

    long long rev;
    rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    cout<<"\n"<<rev<<"\n";
    cout<<bitset<8>(rev)<<"\n";
    if () {
        return 1;
    }else{
        return -1;
    }
    return 0;
}
