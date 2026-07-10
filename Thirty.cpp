//digit problem like reversing digits

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "enter the number:";
    int N;
    cin >> N;
    while (N>0)
    {
        int last_digit=N%10;
        cout << "last_digt:"  << last_digit << endl;
        N=N/10;
    }
    
    return 0;
}