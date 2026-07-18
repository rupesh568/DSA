#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="rupesh";

    int strLen=str.size();
    int Hash[27]={0};
    for(int i=0;i<strLen;i++){
        Hash[str[i]-'a']+=1;
    }
    //fetching or queries;
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        cout << Hash[ch-'a'] << endl;
    }

    return 0;
}