#include<bits/stdc++.h>
using namespace std;
void Recursion(int count){
    
    if(count==3){  //Base condition untill this the function will be run;
        return;
    }
    cout << count << endl;
    count++;
    Recursion(count);  //Recursion Tree;

    
}
int main(){
    Recursion(0);
    return 0;
}