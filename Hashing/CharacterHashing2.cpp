#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="rupeshhhh";

    int strLen=str.size();
    int Hash[256]={0};
    for(int i=0;i<strLen;i++){
        Hash[str[i]]+=1;
    }
    //fetching or queries;
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        cout << Hash[ch] << endl;
    }

    return 0;
}