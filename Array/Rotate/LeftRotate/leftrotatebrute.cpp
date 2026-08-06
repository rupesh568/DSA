#include<bits/stdc++.h>
using namespace std;
void leftRotateByK(int arr[],int N,int k){
    int temp[]={1,2,3};
    int j=0;
    for(int i=k;i<N;i++){
        arr[i-k]=arr[i];
    }
    for(int i=N-k;i<N;i++){
        arr[i]=temp[j];
        j++;

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