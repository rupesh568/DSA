#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int N){
    int count=0;
    //Time compleixty:worst and average case:O(N^2) but best case:O(N);
    //best case came when the given array is already sorted and no need to sort it;
    for(int i=0;i<N-1;i++){
        // int count=0;
        for(int j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
            // swap(arr[j],arr[j+1]);
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            count+=1;
            }
        }
        if(count==0){
            break;
        }
        

    


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
    bubbleSort(arr,N);
    return 0;
}