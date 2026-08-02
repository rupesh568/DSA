#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int N){
        int temp=arr[0];
        int j=N;
        for(int i=1;i<N;i++){
            arr[i-1]=arr[i];
        }
        arr[N-1]=temp;
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
    leftRotate(arr,N);
    return 0;
}