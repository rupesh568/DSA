#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>mst;
    mst.insert(1);
    mst.insert(1);
    mst.insert(6);
    mst.insert(2);
    mst.insert(2);

    mst.erase(1);  //it will erases all 1;

    int cnt=mst.count(2);
    mst.erase(mst.find(2));//it will erase only one 2 ;

    mst.erase(mst.find(2),mst.find(2)+1);

    //rest all the functions are same;
    return 0;
}