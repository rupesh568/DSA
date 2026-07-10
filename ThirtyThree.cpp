#include<bits/stdc++.h>
using namespace std;
void checkPalidrome(int N){
    int originalNumber=N;
    int reverse_number=0;
    while(N>0){
        int last_digit=N%10;
        N=N/10;
        reverse_number=reverse_number*10+last_digit;
    }
    if(originalNumber==reverse_number){
        cout << "The number is palindrome" << endl;
    }else{
        cout << "The number is not palindrome" << endl;
    }

}
int main(){
    cout << "enter the number:";
    int N;
    cin >> N;
    checkPalidrome(N);

    return 0;
}