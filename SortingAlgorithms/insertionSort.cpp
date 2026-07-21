#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int N){
    //Insertion sort;
    int i=0;
    while(i<=N){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i=0;
        }else{
            i+=1;
        }
        
    }
    // for(int i=0;i<N;i++){
    //     if(arr[i]>arr[i+1]){
    //         swap(arr[i],arr[i+1]);
    //         i=0;
    //         // for(int j=0;j<N;j++){
    //         //     if(arr[j]>arr[j+1]){
    //         //         swap(arr[j],arr[j+1]);
    //         //     }
    //         // }
    //     }
        
    // }






    for(int i=0;i<N;i++){
        cout << arr[i];
    }
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[N];
    }
    return 0;
}