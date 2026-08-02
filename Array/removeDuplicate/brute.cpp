#include<bits/stdc++.h>
using namespace std;

//space complexity is :O(N)
//Time complexity is :O(NLOGN)+O(N);
void removeDuplicate(int arr[],int N){
    int count=0;
    set<int>st;
    for(int i=0;i<N;i++){
        st.insert(arr[i]);

    }
    int i=0;
    
    for(int it:st){
        arr[i]=it;
        i++;
        count++;
    }
    for(int i=0;i<N;i++){
        cout << arr[i];
    }
    cout << "No.of unique elements :" << count;
}
int main(){
    int N;
    cin >>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    removeDuplicate(arr,N);
}