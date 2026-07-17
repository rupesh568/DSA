#include<bits/stdc++.h>
using namespace std;
//we need to find all the subsequence of the given number of string;
void subSequence(int arr[],int N,int i){
    for(int i=0;i<N;i++){
        cout << arr[i] << endl;
    }
    


}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    subSequence(arr,N,0);
    return 0;
}