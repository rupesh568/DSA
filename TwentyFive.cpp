#include<bits/stdc++.h>
using namespace std;
//priority queue:is the queue in which data is stored in an order either ascending or descending order forexample:highest value will always come to top or minimum value will always come to top
int main(){
   // this is maximum heap
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(9);
    pq.push(4);
    
    cout << pq.top() << endl;
    
    //this is minimum heap;

    priority_queue<int, vector<int>, greater<int>>pq1;
    pq1.push(3);
    pq1.push(2);
    pq1.push(4);
    pq1.push(1);

    cout << pq1.top();




}