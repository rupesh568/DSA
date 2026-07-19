#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    char arr[N];
    unordered_map<char,int>mpp; //always use unordered_map untill it work and use map only when it fails becuase in unordered map best case and average case happens which is O(1); which happens due to internal collision
    //and another thing in unordered map the key must be a single data structure like int ,char,double but in map the key should be any datatypes as well as any datastructure
    //inserting values;

    //Time complexity of unordered map:O(1) for best and average case but for worst case it is O(N) and time complexity of map is O(logN);
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