#include<bits/stdc++.h>
using namespace std;
void rightRotate(int arr[],int N){
    int temp=arr[N-1];
    for(int i=N-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    rightRotate(arr,N);
}