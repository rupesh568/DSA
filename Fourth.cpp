#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "enter the grade of the person:";
    int grade;
    cin >> grade;
    if(grade>=80){
        cout << "A" << endl;
    }else if(grade>=60){
        cout << "B" << endl;

    }else if(grade>=50){
        cout << "C" << endl;
    }else if(grade>=45){
        cout << "D" << endl;
    }else if(grade>=25){
        cout << "E" << endl;
    }else{
        cout << "F" << endl;
    }
    return 0;
}