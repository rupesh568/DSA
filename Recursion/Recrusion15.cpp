#include<bits/stdc++.h>
using namespace std;

//Find the smallest and largest element of array;
void Find(int arr[],int N,int i){
    int firstElement=arr[i];
    int seconElement=arr[i+1];
    int smallElement=arr[0];
    int largeElement=arr[0];
    while(seconElement<N-1){
        if(firstElement<seconElement){
        largeElement=seconElement;
        smallElement=firstElement;
        i+=1;
    }
    }
    cout <<"Smallest Element:"<< smallElement << endl;
    cout << "Largest Element:" << largeElement;
    


}
int main(){
    int arr[5]={1,2,3,5,4};
    int N=5;
    Find(arr,N,0);

    return 0;
}