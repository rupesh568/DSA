#include<bits/stdc++.h>
using namespace std;
//reverse a number;

void reverseNumber(int N){
    int reversed_Num=0;
    while(N>0){
        int last_digit=N%10;
        reversed_Num=reversed_Num*10+last_digit;
        N=N/10;
    }

    cout << "reversedNumber is:" << reversed_Num;

}

int main(){
    cout << "Enter the number:";
    int N;
    cin >> N;
    reverseNumber(N);

    return 0;
}