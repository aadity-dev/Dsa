#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout << "* " << " ";
        }
        cout<<endl;
    }
}void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j <= i;j++){
            cout << " * "<< " ";
        }
        cout <<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j <= i;j++){
            count++;
            cout << count << " ";
        }
        
        cout <<endl;
    }
}

void pattern4(int n){
      int cnt = 1;
    for(int i=0;i<n;i++){
        for(int j = 0 ;j <= i;j++){
            cout << cnt << " "; 
        }
        cnt++;
        cout<<endl;
    }
}

void pattern13(int n){
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << count << " ";
            count++;
        }
        
        cout <<endl;
    }
}
int main(){
    int N;
    cin >> N;
    //pattern1(N);
    //pattern2(N);
    //pattern3(N);
    pattern4(N);
    //pattern13(N);
    return 0;
}