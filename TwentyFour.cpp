#include<bits/stdc++.h>
using namespace std;
//queue
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    cout << q.front() << endl;
    q.pop();
    cout << q.front();

    q.back()+=5; //changes the value of last element to 10;
    


}