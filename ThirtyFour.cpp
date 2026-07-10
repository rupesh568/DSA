#include<bits/stdc++.h>
using namespace std;
void armstrongNum(int N){
    int originalNum=N;
    int cubeNum=0;
    while (N>0)
    {
        int last_digit=N%10;
        cubeNum=cubeNum+last_digit*last_digit*last_digit;
        N=N/10;
    }
    if(cubeNum==originalNum){
        cout << "The given number is armstrong";
    }else{
        cout << "The given number is not armstrong number";
    }
    

}

int main(){
    cout << "enter the number:";
    int N;
    cin >> N;
    armstrongNum(N);

    return 0;
}