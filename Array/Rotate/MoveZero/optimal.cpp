#include<bits/stdc++.h>
using namespace std;
void moveZero(int arr[],int N){
    int i=0;
    while(i<N){
        if(arr[i]==0){
            int temp=arr[i];
            int j=i;
            while(j<N){
                arr[j]=arr[j+1];
                j++;
            }
            arr[N-1]=temp;
            
   
            
        }
        if(arr[i]==0){
                i==0;
        }else{
            i++;
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