#include<iostream>
using namespace std;


void spiralPrint(int arr [][],int row, int col){
    int topRow = 0;
    int bottomRow = row - 1;
    int leftcol = 0;
    int rightcol = col - 1;
    while(topRow <= bottomRow && leftcol <= rightcol){
        for(int i=leftcol;i<=rightcol;i++){
            cout<<arr[topRow][i] << " ";
            topRow++;
        }
    }
    for(int i = topRow)
}


int main(){
    int arr[3][3] = {{1,2,3,},{4,5,6},{7,8,9}};
    //c
    int maxSum = 0;
    for(int j=0;j<3;j++){
        int csum = 0;
        for(int i = 0;i<3;i++){
            csum += arr[i][j];
        }
        if(maxSum >= csum){
            cout<<maxSum<<endl;}
        else maxSum = csum;
    }
    cout<< maxSum;
    // //r
    // for(int i=0;i<3;i++){
    //     int rsum = 0;
    //     for(int j = 0;j<3;j++){
    //         rsum += arr[i][j];
    //     }
    //       cout<<rsum<<endl;
    // }

    return 0;
}