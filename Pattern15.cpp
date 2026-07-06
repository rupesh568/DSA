#include<bits/stdc++.h>
using namespace std;
void pattern15(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-2;j++){
            cout << " ";
        }
        for(char j='A';j<='A'+2*i;j++){
            cout << j ;
        }
        for(int j=0;j<n-i-2;j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "enter the value of number:";
    int n ;
    cin >>n;
    pattern15(n);
    return 0;
}