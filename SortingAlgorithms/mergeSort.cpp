#include<bits/stdc++.h>
using namespace std;
//Time complexity:O(N.log base 2 N) and space complexity:O(N)
void ms(int arr[],int low,int mid,int high){
    vector<int>v;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            v.push_back(arr[left]);
            left++;
        }
        else{
            v.push_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        v.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        v.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=v[i-low];
    }
}
void mergeSort(int arr[],int low,int high){
    
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    ms(arr,low,mid,high);
    















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
    for(int i=0;i<N;i++){
        cout << arr[i];
    }
    return 0;
}