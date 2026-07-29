#include<bits/stdc++.h>
using namespace std;
//This is better solution but not optimum because here the for loop will run twice and each loop has time complexity of O(N).SO IT WILL BE O(2N);
void secondLargest(int arr[],int N){
    int largest=arr[0];
    int secondLargest=-1;
    for(int i=0;i<N;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(arr[i]>secondLargest && arr[i]!=largest){
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

    return 0;
}