#include<bits/stdc++.h>
using namespace std;
void secondLargest(int arr[],int N){
   //first sort the array using any algorithm and have time complexity of :O(NlogN)+O(N);

   int secondLargest=-1;
   for(int i=N-2;i>=0;i--){
    if(arr[i]>secondLargest && arr[i]!=arr[N-1]){
        secondLargest=arr[i];
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
}