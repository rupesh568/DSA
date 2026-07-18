#include<bits/stdc++.h>
using namespace std;
int hashh[100000];
int main(){
    
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];

    }
    //prestoring;
    // int hash[100000]={0}; //it is used untill 10^6 only this inside int main() above it use it globally only but above it we need to declare it globally
    for(int i=0;i<N;i++){
        hashh[arr[i]]+=1;
    }

    //Fetching or printing the number of each elements of array exisiting how many times;
    int q;
    cin >>q;
    while(q--){
        int number;
        cin >> number;
        cout << hashh[number] << endl;
    }

    return 0;
}