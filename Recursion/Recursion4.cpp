#include<bits/stdc++.h>
using namespace std;
void Recursion4(int start,int N){  //print from 1 to N using recursion
    if(start>N){
        return;
    }
    cout << start << endl;
    start++;
    Recursion4(start,N);
    
}

int main(){
    int start,N;
    cin >> start >> N;

    Recursion4(start,N);
    return 0;
}