#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,4,4,2,3,2,3,2,3,3,15,15,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int freq[32]= {0};
    for(int i=0;i<n;i++)
    {
        for(int bi = 0;bi< 32;bi++){
            if(arr[i] && (1<<bi)){
                freq[bi]++;
            }
        } 
    }
    for(int bi=0;bi<4;bi++){
        cout<<bi<<freq[bi]<<endl;
    }
    
}