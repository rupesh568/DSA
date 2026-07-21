#include<bits/stdc++.h>
using namespace std;
void pattern10(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << num << " ";
            if(num==1){
                num=0;
            }else{
                num=1;
            }
            
        }
        

        cout << endl;
    }
}
int main(){
    
    int n;
    cin >> n;
    pattern10(n);
    return 0;
}