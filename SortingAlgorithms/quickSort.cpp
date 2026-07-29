#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=arr[low] && i<=high-1){
            i++;
        }
        while(arr[j]>=arr[low] && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }

    
    
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
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
    return 0;
}