#include<bits/stdc++.h>
using namespace std; //Both Time and space complexity both are :O(n) 
void Recursion3(int count){
    if(count==5){
        return;
    }
    cout << "Rupesh Kumar Chaudhary" << endl;
    count++;
    Recursion3(count);


}

int main(){
    Recursion3(0);
    return 0;

}