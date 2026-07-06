#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(1); 
    st.push(2);
    st.push(3);
    st.push(4);
    //{4,3,2,1} // 4 will be in top
    st.pop(); //{3,2,1}
    cout << st.top() << endl;

    cout << st.size() << endl;
    stack<int>st3;
    st.swap(st3);
    
    
}