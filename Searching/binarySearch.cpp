#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int K,int low,int high){
    if(low>high){
        cout << "Element Not Found";
        return;
    }
    int mid=(low+high)/2;
    if(arr[mid]==K){
        cout << "Element is Found";
        return;
    }else if(arr[mid]<K){
        binarySearch(arr,K,mid+1,high);
    }else if(arr[mid]>K){
        binarySearch(arr,K,low,mid-1);
    }

}
int main(){
    int K;
    cin >> K;
    int N;
    cin >> N;
    int low=0;
    int high=N-1;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    binarySearch(arr,K,low,high);
    return 0;
}