#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;

    int *arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int result = 0;
    int temp[32] = {0};
    for(int bit = 0;bit<32;bit++){
        int count = 0;
        for(int i =0;i<n;i++){
            if((arr[i] & (1<< bit)) != 0){
                count++;
            }
        }
        if(count % 3 != 0){
            result |= (1<<bit);
        }
        
    }
    cout<<result;
    delete[] arr;
}