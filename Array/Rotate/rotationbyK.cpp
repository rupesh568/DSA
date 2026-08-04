#include<bits/stdc++.h>
using namespace std;
//left rotation by k;
void rotationByK(int arr[],int N,int k){
    int j=1;
    for(int i=N-k;i<N;i++){
        int temp=arr[i-k];
        swap(temp,)
    }
    for(int i=0;i<N;i++){
        cout << arr[i];
    }

}
int main(){
    int k;
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    rotationByK(arr,N,k);
    return 0;
}