#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int N){
    //Insertion sort;is the sorting algorithm in which elements are inserted in the correct position+
    //Time complexity :Best case:O(N) if the array is already sorted but O(N^2) for worst and average cases;
    for(int i=0;i<N;i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
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
    insertionSort(arr,N);
    return 0;
}