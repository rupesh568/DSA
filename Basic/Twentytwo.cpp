#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(3);
    dq.push_front(1);
    dq.emplace_front(9);
    dq.pop_front();
    dq.pop_back();

    dq.back();
    dq.front();
    //rest all the fuctions are same as vector;
}