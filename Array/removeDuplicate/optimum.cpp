#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(int arr[],int N){
    int count=1;
    int i=0;
    for(int j=1;j<N;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
            count++;
        }
    }
    cout << "Number of unique elements:" << count << endl;
    for(int i=0;i<N;i++){
        cout << arr[i];
    }

}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    removeDuplicate(arr,N);
    return 0;
}