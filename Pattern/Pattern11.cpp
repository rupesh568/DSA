#include<bits/stdc++.h>
using namespace std;

void pattern10(int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=i+1;j++){
            cout << j;
        }
        for(int j=0;j<=n-2*i;j++){
            cout << " ";
        }
        for(int j=1;j<=i+1;j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    // cout << "Enter the value of number:";
    int n;
    cin >> n;
    pattern10(n);
}