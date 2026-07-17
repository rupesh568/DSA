#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];

    }
    //prestoring;
    int hash[13]={0};
    for(int i=0;i<N;i++){
        hash[arr[i]]+=1;
    }

    //Fetching or printing the number of each elements of array exisiting how many times;
    int q;
    cin >>q;
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }

    return 0;
}