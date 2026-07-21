#include<bits/stdc++.h>
using namespace std;
//unordered set:it is used to store value in unordered form but all the values must be unique;
int main(){
    unordered_set<int>uset;
    uset.insert(1);
    uset.insert(3);
    uset.insert(4);
    uset.insert(4);
    uset.insert(5);

    uset.erase(1);

    //everthing else are same as set;
    return 0;
}