//Recursion is when a function calls itself multiple times unless a given condition is true;

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