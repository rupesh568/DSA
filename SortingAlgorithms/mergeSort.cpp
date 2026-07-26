#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int low,int high){
    vector<int>v;
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    















}
int main(){
    int N;
    cin >> N;
    int arr[N];
    int low=0;
    int high=N-1;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    mergeSort(arr,low,high);
    return 0;
}