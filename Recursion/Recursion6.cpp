#include<bits/stdc++.h>
using namespace std;
//print  1 to N using backtracking ;That means we cannot use ++ method;
void Recursion6(int start,int N){
    if(start<1){
        return;
    }
    
    Recursion6(start-1,N);
    cout << start << endl;

}
    
int main(){
    cout << "enter the numbers:";
    int start,N;
    cin >> start >> N;
    Recursion6(start,N);
    return 0;
}