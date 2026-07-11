#include<bits/stdc++.h>
using namespace std;
void Recursion5(int N,int start){  //print from N to 1 using recursion;
    if(N<start){
        return;
    }
    cout << N << endl;
    N--;
    Recursion5(N,start);

}
int main(){
    Recursion5(5,1);
    return 0;
}