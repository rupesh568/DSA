#include<bits/stdc++.h>
using namespace std;
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    // cout << "enter the value of n:";
    int n;
    cin >> n;
    pattern5(n);
    return 0;
}