#include<bits/stdc++.h>
using namespace std;
//map:It stores value in sorted order and it is used above 10^8 hash array becuase an array cannot accomadate more than it and it only store those elements that exists in the order of {key,value} where key is the number and value is the frequencies of that number;
int main(){
    int N;
    cin >> N;
    int arr[N];
    map<int,int>mpp;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        mpp[arr[i]]++;   //this is simple way of doing it;
    }

    //precompute
    // map<int,int>mpp;
    // for(int i=0;i<N;i++){
    //     mpp[arr[i]]+=1;
    // } ,it can be written simply as well;
   for(auto it:mpp){
        cout << it.first << " ," << it.second << endl;
   } // can be itererated as well;

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