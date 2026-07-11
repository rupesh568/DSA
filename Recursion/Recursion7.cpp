#include<bits/stdc++.h>
using namespace std;
void Recursion7(int i,int N){
    if(i>N){
        return;
    }
    Recursion7(i+1,N);
    cout << i << endl;
}

int main(){
    cout << "enter the number:";
    int i,N;
    cin >> i >> N;
    Recursion7(i,N);
    return 0;
}