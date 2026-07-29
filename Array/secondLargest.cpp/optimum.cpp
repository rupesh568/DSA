#include<bits/stdc++.h>
using namespace std;
void secondLargest(int arr[],int N){
    int largest=arr[0];
    int secondLargest=-1;
    for(int i=1;i<N;i++){
        if(arr[i]>largest){
            largest=arr[i];
            
            
        }
        if(arr[i-1]>secondLargest && arr[i-1]!=largest){
                secondLargest=arr[i-1];
        }
    }   
    cout << secondLargest;
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    secondLargest(arr,N);
    return 0;
}