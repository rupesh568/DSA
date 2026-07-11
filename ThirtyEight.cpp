#include<bits/stdc++.h>
using namespace std;
//Find GCD or HCF;
//Time complexity:o(min(N1,N2))
void checkGCD(int N1,int N2){
    int gcd=1;
    
    for(int i=1;i<=min(N1,N2);i++){
        if(N1%i==0 && N2%i==0){
            gcd=i;
            
        }
    }
    cout << "Gcd:" << gcd;

}

int main(){
    cout << "enter the numbers:";
    int N1,N2;
    cin >> N1 >> N2;
    checkGCD(N1,N2);
    return 0;
}