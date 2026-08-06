#include<bits/stdc++.h>
using namespace std;
//This is the best approach as the time complexity is only O(N) and space complexity if O(1) which is optimal solution
void leftrotateBYK(int arr[],int k,int N){
    reverse(arr,arr+k);
    reverse(arr+k,arr+N);
    reverse(arr,arr+N);
    for(int i=0;i<N;i++){
        cout << arr[i];
    }
}
int main(){
    int k;
    cin >> k;
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    leftrotateBYK(arr,k,N);
    return 0;
}