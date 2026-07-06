#include<bits/stdc++.h>
using namespace std;
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<'A'+n-i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter the value of number:";
    int n;
    cin >> n;
    pattern14(n);
    return 0;
}