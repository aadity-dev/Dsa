#include<iostream>
using namespace std;
void p4(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
    int t; 
    cin>>t;
    for(int i=0;i<=t;i++){
        int n;
        cin>>n;
        p4(n);
    }
}
// *  *  * 
// *  * 
// * 