#include<bits/stdc++.h>
using namespace std;
void pattern19(int n){
    for(int i=0;i<n-3;i++){
        for(int j=0;j<=i+1-2*i;j++){
            cout << "*";
        }
        for(int j=0;j<2*i;j++){
            cout << " ";
        }
        for(int j=0;j<=i+1-2*i;j++){
            cout << "*";
        }
        cout << endl;

    }
    for(int i=0;i<n-3;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<2-2*i;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;

    }
}

int main(){
    // cout << "enter the value of number:";
    int n;
    cin >>n;
    pattern19(n);
    return 0;
}