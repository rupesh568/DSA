#include<bits/stdc++.h>
using namespace std;

void pattern2(int n){
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << j << " ";
            
        }
        cout << endl;
    }
}

int main(){
    cout << "enter the number:";
    int n;
    cin >> n;
    pattern2(n);
    return 0;
}