#include<bits/stdc++.h>
using namespace std;
//Parameterised Recursion for printing the sum of number;
void Recursion7(int val,int i,int N){
    int sum=val;
    
    if(i>N){
        cout << sum << endl;
        return;
    }
    
    sum+=i;
    Recursion7(sum,i+1,N);
    
    
    
}
int main(){
    
    Recursion7(0,1,5);
    return 0;
}