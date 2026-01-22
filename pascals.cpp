#include<iostream>
using namespace std;

void pascals(int n){
    for(int i = 0;i<n;i++)
    {
        int s = 1; // tri st with value 1.
        for(int j = 0;j <= i;j++)
        {
            cout<<" "<<s<<" ";
            s = s * (i - j) / (j + 1);
        }
        cout<<endl;
    }
}
// void p2(int n){
//     int ans =1;
// for(int i = 0;i<n;i++){
//     cout<<ans<<" ";
//     ans = ans * (n -i)/(i+1);
// }
//}
int main(){
    int n;
    cin>>n;
    pascals(n);
   //p2(n);
}