#include<bits/stdc++.h>
using namespace std;

//Euclidean Method :It is used to find the gcd of two number
//Time complexity:o(logphi(min(a,b)))
void findGcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) {
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0){
        cout << b;
    }
    if(b==0){
        cout << a;
    }
}

int main(){
    cout << "enter the number:";
    int a,b;
    cin >> a >> b;
    findGcd(a,b);

    return 0;
}