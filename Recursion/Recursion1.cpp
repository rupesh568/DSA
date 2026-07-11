//Recursion is when a function calls itself multiple times unless a given condition is true;
//so this function will run till infinite times why because there is no stopping condiiton ,so to stop this function we must have to use base case that will be used for stopping it
#include<bits/stdc++.h>
using namespace std;
void print1(){
    cout << "1" << endl;
    print1();
}

int main(){
    print1();
    return 0;
}