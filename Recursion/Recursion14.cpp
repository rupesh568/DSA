#include<bits/stdc++.h>
using namespace std;

int Recursion14(int N){
    if(N<=1){
        return  N;
    }
    int last=Recursion14(N-1);
    int second_last=Recursion14(N-2);
    return last+second_last;
}

int main(){
    cout << "enter the number:";
    int N;
    cin >> N;
    cout << Recursion14(N);
    return 0;
}