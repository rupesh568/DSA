#include<bits/stdc++.h>
using namespace std;

void findUnion(int a[],int b[],int N1,int N2) {
        vector<int>v;
        int i=0;
        int j=0;
        while(i<N1 && j<N2){
            
            if(a[i]<b[j]){
                if(v.empty() || a[i]!=v[v.size()-1]){
                    v.push_back(a[i]);
                    i++;
                }else{
                    i++;
                }
                
            }else if(b[j]<a[i]){
                if(v.empty() || b[j]!=v[v.size()-1]){
                    v.push_back(b[j]);
                    j++;
                }else{
                    j++;
                }
                
            }else if(a[i]==b[j]){
                if(v.empty() || a[i]!=v[v.size()-1]){
                    v.push_back(a[i]);
                    i++;
                    j++;
                }else{
                    i++;
                    j++;
                }
               
            }
        }
        while(i<N1){
            if(v.empty() || a[i]!=v[v.size()-1]){
                v.push_back(a[i]);
                i++;
            }else{
                i++;
            }
            
        }
        while(j<N2){
            if(v.empty() || b[j]!=v[v.size()-1]){
                v.push_back(b[j]);
                j++;
            }else{
                j++;
            }
            
        }
        for(int k=0;k<v.size();k++){
            cout << v[k];
        }
    }
int main(){
    int N1;
    cin >> N1;
    int a[N1];
    for(int i=0;i<N1;i++){
        cin >> a[i];
    }
    int N2;
    cin >> N2;
    int b[N2];
    for(int j=0;j<N2;j++){
        cin >> b[j];
    }
    findUnion(a,b,N1,N2);
    
}