#include<bits/stdc++.h>
using namespace std;
void pattern3(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << num << " ";
            
            
        }
        num+=1;
        
        cout << endl;
    }

}
int main(){
    cout << "enter the number:";
    int n;
    cin >> n;
    pattern3(n);
    return 0;
}