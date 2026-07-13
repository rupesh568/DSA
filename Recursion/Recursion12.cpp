#include<bits/stdc++.h>
using namespace std;
bool palindrome(string str,int N,int i){
     
    if(i>=N-i-1){
        return true;
    }
    if(str[i]!=str[N-i-1]){
        return false;
    }
    return palindrome(str,N,i+1);


}

int main(){
    cout << "enter the string:";
    string str;
    cin >> str;
    int N=str.size();
    cout << palindrome(str,N,0);
    

    return 0;
}