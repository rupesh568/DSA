#include<bits/stdc++.h>
using namespace std;
//For Loop
int main(){
    
    for(int i=10;i>=1;i--){
        cout << i << endl;
    }

    int n=2;
    for(int i=1;i<=10;i++){
        cout << i*n << endl;
    }

    for(int i=1;i<=10;i++){
        if(i==5){
            break;
        }
        cout << i << endl;
    }

    for(int i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}