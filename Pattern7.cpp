#include<bits/stdc++.h>
using namespace std;
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<=n*2-2*i-2;j++){
            cout << "*" ;
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    cout << "enter the value of number:";
    int n;
    cin >> n;
    pattern7(n);
}