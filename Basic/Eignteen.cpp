#include<bits/stdc++.h>
using namespace std;
//taking input of arry and remeber that array is always passed as reference of value;
void doNothing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    arr[1]+=2;


}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    doNothing(arr,n);
    cout << arr[1];
    return 0;
}