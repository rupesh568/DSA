#include<bits/stdc++.h>
using namespace std;
void quickSort(int arr[],int N,int low,int high){
    int temp=arr[0];
    int j=0;
    int pivotElemetn=arr[0];
    for(int i=0;i<N;i++){
        if(arr[0]<arr[i+1]){
            j=i+1;
            arr[j]=temp;
        }
    }
    quickSort(arr,)
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    int high=N-1;
    for(int i=0;i<N;i++){
         cin >> arr[i];
    }
    quickSort(arr,N,0,high);
    return 0;
}