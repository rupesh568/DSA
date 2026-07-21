#include<bits/stdc++.h>
using namespace std;

void pattern16(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(char j=0;j<=i;j++){
            cout << ch;
        }
        ch=ch+1;
        cout << endl;
        

    }
}

int main(){
    // cout <<  "enter the value of number:";
    int n;
    cin >> n;
    pattern16(n);
    return 0;
}