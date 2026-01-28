#include<iostream>
using namespace std;
void selectionSort(int n,int arr[]){
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if (min != i) {
                int temp = arr[i]; 
                arr[i] = arr[i+1];
                arr[i+1] =temp;
            }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(n, arr);
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
