#include<bits/stdc++.h>
using namespace std;
//check either number is prime or not:if a number is prime it has only two divisor ,so we will check its divisors;
//Time complexity:o(sqrt(n))
void checkPrime(int N){
    vector<int>v;
    int count=0;
    for(int i=1;i*i<=N;i++){
        if(N%i==0){
            v.push_back(i);
            count++;
            if((N/i)!=i){
                v.push_back(N/i);
                count++;
            }

        }
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout << it << endl;
    }
    if(count==2){
        cout << "prime number" << endl;
    }else{
        cout << "not prime number" << endl;
    }
    
}

int main(){
    cout << "enter the number:";
    int N;
    cin >> N;
    checkPrime(N);
    return 0;
}