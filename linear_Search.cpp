#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            if(key > 10 )   return  2 * key;
            else return key / 2;
        }
    }
    return -1;
}


int main(){
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 12;
    int result = linearSearch(arr, n, key);
    if(result != -1){
        cout << "Key found Result: " << result << endl;
    } else {
        cout << "Key not found!" << endl;
    }
    return 0;
}