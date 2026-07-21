#include<bits/stdc++.h>
using namespace std;
void pattern13(int n){
    
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout << j << " ";
            
        }
        
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern13(n);
    return 0;
    
}