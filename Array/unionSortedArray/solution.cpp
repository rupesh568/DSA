#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>v;
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size()){
            
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
        while(i<a.size()){
            if(v.empty() || a[i]!=v[v.size()-1]){
                v.push_back(a[i]);
                i++;
            }else{
                i++;
            }
            
        }
        while(j<b.size()){
            if(v.empty() || b[j]!=v[v.size()-1]){
                v.push_back(b[j]);
                j++;
            }else{
                j++;
            }
            
        }
        return v;
    }
int main(){
    int a;
    cin >> a;
    int N;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    int b;
    
}