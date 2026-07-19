#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int N){
    int i=0;
    for(int i=0;i<N-1;i++){
        int min_val=arr[i];
        int k=i;
        for(int j=i;j<N;j++){
            if(arr[j]<min_val){
                min_val=arr[j];
                k=j;
                
                
            }
            
        }
        int temp=arr[i];
        arr[i]=arr[k];    //swap using third variable is done here;
        arr[k]=temp;
        
        
        
        
    }
    
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
    selectionSort(arr,N);
    return 0;
}