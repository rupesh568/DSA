#include<bits/stdc++.h>
using namespace std;
int Recursion10(int N){
    if(N==0 || N==1){
        return 1;
    }
    return N*Recursion10(N-1);
}

int main(){
    int N;
    cin >> N;
    cout << Recursion10(N);
    return 0;
}