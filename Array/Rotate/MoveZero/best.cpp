#include<bits/stdc++.h>
using namespace std;
void moveZero(int arr[],int N){
    int j=0;
    
    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
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
    moveZero(arr,N);
    return 0;
}