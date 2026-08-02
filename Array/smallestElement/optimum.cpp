#include<bits/stdc++.h>
using namespace std;
void smallestElement(int arr[],int N){
    int smallestElement=arr[0];
    int secondSmallest=INT_MAX;
        for(int i=1;i<N;i++){
            if(arr[i]<smallestElement){
                secondSmallest=smallestElement;
                smallestElement=arr[i];
            }else if(arr[i]<secondSmallest && arr[i]!=smallestElement){
                secondSmallest=arr[i];
            }
        }
        
        if(secondSmallest==INT_MAX){
            cout << "-1";
        }else{
            cout << "smallestElement:" << smallestElement << "and secondSmallestElement:" << secondSmallest << endl;
        }
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    smallestElement(arr,N);
    return 0;
}