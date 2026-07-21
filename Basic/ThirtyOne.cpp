#include<bits/stdc++.h>
using namespace std;
//cout number of digits in a number;
void countDigit(int N){
    int count=0;
    while (N>0)
    {
        int last_digit=N%10;
        count++;
        N=N/10;
    }
    cout << "Total number of digits are:" << count;
    
}
int main(){
    cout << "Enter the number:";
    int N;
    cin >> N;
    countDigit(N);

    return 0;
}