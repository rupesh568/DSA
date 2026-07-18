#include<bits/stdc++.h>
using namespace std;
//map:It stores value in sorted order and it is used above 10^8 hash array becuase an array cannot accomadate more than it and it only store those elements that exists in the order of {key,value} where key is the number and value is the frequencies of that number;
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    //precompute
    map<int,int>mpp;
    for(int i=0;i<N;i++){
        mpp[arr[i]]+=1;
    }
   for(auto it:mpp){
        cout << it.first << " ," << it.second << endl;
   }

    //queries;
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fetching
        cout << mpp[num] << endl;
    }
    return 0;
}