#include<bits/stdc++.h>
using namespace std;
void sortColor(int arr[],int N,int low,int high){
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            low++;
        }
    }
}
int main(){
    int N;
    cin >> N;
    int low=0;
    int high=N-1;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    sortColor(arr,N,low,high);
    return 0;
}