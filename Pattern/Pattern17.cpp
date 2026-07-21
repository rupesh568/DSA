#include<bits/stdc++.h>
using namespace std;

void pattern17(int n){
    char ch='E';
    for(int i=0;i<n;i++){
        for(char j=ch;j<=ch+i;j++){
            cout << j << " ";
        }
        ch=ch-1;
        cout << endl;
    }
}

int main(){
    // cout << "enter the value of number:";
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}