#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    char arr[N];
    map<char,int>mpp;
    //inserting values;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout << it.first << "," << it.second << endl;
    }
    
    //query;
    //fetching
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        cout << mpp[ch] << endl;
    }
    return 0;
}