#include<bits/stdc++.h>
using namespace std;

void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
             cout << "*";
        }
        cout << endl;
    }
}

int main(){
    // cout << "enter the value of number:";
    int n;
    cin >>n;
    pattern9(n);
    return 0;
}