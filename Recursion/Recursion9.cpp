#include<bits/stdc++.h>
using namespace std;
int Recursion9(int N){ //printing sum from 1 to N without using parameter but using function
    if(N==0){
      return 0;
    }
    return N+Recursion9(N-1);
}

int main(){
    int N;
    cin >> N;
    cout << Recursion9(N);
    return 0;
}