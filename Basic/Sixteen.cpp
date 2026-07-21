//pass by value and pass by refrence function

#include<bits/stdc++.h>
using namespace std;
void doSomething(int num){
    cout << num << endl;
    num+=5;
    cout << num  << endl;
    num+=5;
    cout << num << endl;
}
int main(){
    int num;
    cin >> num;
    doSomething(num);
    cout << num << endl;

    return 0;
}
// in this function the value of num remain same even due to passby value