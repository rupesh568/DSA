#include<bits/stdc++.h>
using namespace std;
//space complexity is :O(N) and time complexity is:
void moveZero(int arr[],int N){
    vector<int>v;
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            v.push_back(arr[i]);
        }
    }
    int j=0;
    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    int l=1;
    for(int i=0;i<v.size();i++){
        arr[N-l]=v[i];
        l++;
    }
    for(int i=0;i<N;i++){
        cout << arr[i];
    }
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    moveZero(arr,N);
    return 0;
}