#include<bits/stdc++.h>
using namespace std;
void leftRotateByK(int arr[],int N,int k){
    //here space complexity is only O(N) if we dont include input of array ,but time complexity if O(N)+O(N)
    // k=k%N;
    int temp[k];
    
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    
    for(int i=k;i<N;i++){
        arr[i-k]=arr[i];

    }
    for(int i=N-k;i<N;i++){
        arr[i]=temp[i-(N-k)];
    }
    for(int i=0;i<N;i++){
        cout << arr[i];
    }
}
int main(){
    
    int k;
    cin >> k;
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    leftRotateByK(arr,N,k);
    return 0;
}