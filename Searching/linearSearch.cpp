#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[],int K,int N){
    for(int i=0;i<N;i++){
        if(arr[i]==K){
            cout << "Element is found at index" <<  i << endl;
            return;
        }
        
    }
    
    cout << "Element is not Found";



}
int main(){
    int K;
    cin >> K;
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    linearSearch(arr,K,N);
    return 0;
}