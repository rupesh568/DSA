#include<bits/stdc++.h>
using namespace std;
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