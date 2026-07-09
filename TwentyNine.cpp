#include<bits/stdc++.h>
using namespace std;

//map:it is a type of data structure or container which is used to store value in key and values form where all the keys are unique but values can be duplicate.and it can be of any dataypes like integer,character,doble ,pair etc and map stored keys in sorted order;


int main(){
    map<int,int>mpp;
    map<int,pair<int,int>>mpp1;
    map<pair<int,int>,int>mpp2;

    mpp[1]=2;
    mpp[8]=9;
    
    mpp.insert({4,6});

    mpp2[{5,6}]=11;

    for(auto it:mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[4] << endl;

    auto it1=mpp.find(8);
    //cout << *(it1).second;  //

    //Multimap:it is same as map the only difference is that we can store duplicate keys aswell only thing it that  the keys must be sorted
     //Unordered map:It is also same as map but the thing is that it stores unique but in unsorted order.

    return 0;
}