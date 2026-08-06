#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int i,int j){
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void rightRotate(int arr[],int N,int k){
    reverse(arr,N-k,N-1);
    reverse(arr,0,N-k-1);
    reverse(arr,0,N-1);

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
    rightRotate(arr,N,k);
    
    return 0;
}