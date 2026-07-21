#include<bits/stdc++.h>
using namespace std;
void pattern15(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-2;j++){
            cout << " ";
        }
        char ch='A';
        int breakPoint=(2*i+1)/2;
        for(int j=0;j<=2*i;j++){
            cout << ch;
            if(j<=breakPoint){
                ch++;
            }else{
                ch--;
            }
        }
        for(int j=0;j<n-i-2;j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "enter the value of number:";
    int n ;
    cin >>n;
    pattern15(n);
    return 0;
}