#include<bits/stdc++.h>
using namespace std;
void quickSort(int arr[],int low,int high){
    int N=arr.size();
    if(low<=high){
        return;
    }
    int i=0;
    int temp=arr[i];
    int pivotElemet=arr[i];
    for(int i=0;i<N;i++){
        for(int j=high;j>0;j--){
            if(i>j){
                return;
            }
            if(arr[i]>arr[0] && arr[j]<arr[0]){
            swap(arr[i],arr[j]);
        }
        }
        
        
        
    }
    
    quickSort(arr,low,j-1);
    quickSort(arr,j+1,high);
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    int high=N-1;
    for(int i=0;i<N;i++){
         cin >> arr[i];
    }
    quickSort(arr,0,high);
    return 0;
}