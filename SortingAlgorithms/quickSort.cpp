#include<bits/stdc++.h>
using namespace std;
void quickSort(int arr[],int low,int high){
    int N=arr.size();
    if(N==1){
        return;
    }
    int temp=arr[0];
    int j=0;
    int pivotElemetn=arr[0];
    for(int i=0;i<N;i++){
        if(arr[0]<arr[i+1]){
            j=i+1;
            arr[j]=temp;
        }
        for(int i=0;i<N;i++){
            j=0;
            int k=j+1;
            if(arr[i]<arr[j]){
                arr[j]=arr[i];
                j++;
            }
            if(arr[i]>arr[j]){
                arr[k]=arr[i];
                k++;
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