#include<bits/stdc++.h>
using namespace std;
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main(){
    // cout << "enter the number:";
    int n;
    cin >> n;
    pattern4(n);
    return 0;
}