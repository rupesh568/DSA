#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "enter the age of the person:";
    int age;
    cin >> age;
    if(age<18){
        cout << "not eligible for job" << endl;
    }
    if(age>=18 && age <=54){
        cout << "eligble for job" << endl;
        
    }else if(age<=57){
        if(age>=55){
            cout << "eligible for job but retirement soon.." << endl;
        }
    
    }else{
        cout << "retirement soon" << endl;
    }
    return 0;
}