#include<bits/stdc++.h>
using namespace std;
//list is a similar as vector the only difference is that we can push the value from front as well//
//all other functions are same as vector;

int main(){
    list<int>ls;
    ls.push_front(3);
    ls.emplace_front(4);
    ls.push_back(1);
    ls.emplace_back(9);     
    return 0;
}