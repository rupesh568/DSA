#include<bits/stdc++.h>
using namespace std;
//vector is a dynamic container whose size can be increased or decreased unlike an array whose size is fixed
int main(){
    //declaration;
    vector<int>v;
    v.push_back(2);
    v.emplace_back(1);
    cout << v[0] << endl;
    vector<pair<int,int>>v1;
    v1.push_back({1,2});
    v1.emplace_back(4,3);
    vector<int>v2(5);
    vector<int>v3(4,100);
    v3.push_back(9);
    v3.push_back(10);
    for(vector<int>::iterator it=v3.begin();it!=v3.end();it++){
        cout << *(it) << " " << endl;
    }
    
    for(auto it=v3.begin();it!=v.end();it++){  //always use this in place of the above as auto automatically declared the data type
        cout << *(it) << " ";
    }

    vector<int>v6(6,60);
    v6.erase(v6.begin()+1);  // this will delete only second element
    v6.erase(v6.begin()+1,v6.begin()+3);//this will delete both second and third element

    v6.insert(v6.begin(),55); //this will insert value at start;
    v6.insert(v6.begin()+1,3,21);// this will insert three values at secon place of container

    //v6.size();
    //v1.clear();
    //v1.swap(v2);
    //v1.empty();
    //v1.pop_back();//delete the last element;
    
    
    vector<int>v5(v3);
    cout << v3[0];
    return 0;
}