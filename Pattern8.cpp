#include<bits/stdc++.h>
using namespace std;
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout << " " ;
        }
        for(int j=0;j<=2*i;j++){
            cout << "*" ;

        }
        for(int j=1;j<n-i;j++){
            cout << " " ;
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " " ;
        }
        for(int j=0;j<=2*n-2*i-2;j++){
            cout << "*";
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
    pattern8(n);
    return 0;
}