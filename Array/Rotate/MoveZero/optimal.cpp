#include<bits/stdc++.h>
using namespace std;
void moveZero(int arr[],int N){
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            int temp=arr[i];
            while(i<N){
                arr[i]=arr[i+1];
                i++;
            }
            arr[N-1]=temp;
            
            
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