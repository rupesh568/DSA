#include<bits/stdc++.h>
using namespace std;
//set is used to store values in sorted order and unique elements;
int main(){
    set<int>st;
    st.insert(1);
    st.insert(4);
    st.insert(3);
    st.insert(3);
    st.insert(5);

    auto it=st.find(1);

    st.erase(3);

    int cnt=st.count(5);
    cout << cnt << endl;

    auto it1=st.find(4);
    auto it2=st.find(5);

    st.erase(it1,it2);
    

    
}