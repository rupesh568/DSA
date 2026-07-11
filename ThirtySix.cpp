#include<bits/stdc++.h>
using namespace std;
void findDivisors(int N){
    vector<int>v;
    // int i=1;
    // while(i<=N){
    //     if(N%i==0){
    //         cout << i << endl;
    //     }
    //     i++;
    // }
    //we can do it using for loop as well ;
    for(int i=1;i*i<=N;i++){
        if(N%i==0){
            v.push_back(i);
            if((N/i)!=i){
                v.push_back(N/i);
            }
        }
        
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout << it << endl;
    }
}
int main(){
    cout << "enter the number:";
    int N;
    cin >> N;
    findDivisors(N);

    return 0;
}