#include<bits/stdc++.h>
using namespace std;
//Reverse array using recursion;
void Recursion11(int n,int i,int arr[]){
    
    
    
    if(i>=n-i-1){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    
    Recursion11(n,i+1,arr);

}

int main(){
    int N;
    cin >>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    Recursion11(N,0,arr);
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }


    return 0;
}