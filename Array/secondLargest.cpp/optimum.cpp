#include<bits/stdc++.h>
using namespace std;
void secondLargest(int arr[],int N){
    int largest=arr[0];
    int secondLargest=INT_MIN;
    for(int i=1;i<N;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
            
            
            
        }
        if(arr[i]>secondLargest && arr[i]!=largest){
                secondLargest=arr[i];
        }
    } 
    if(secondLargest==INT_MIN){
        cout << -1;
    }else{
        cout << secondLargest;
    } 
    
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