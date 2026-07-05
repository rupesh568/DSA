#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "enter the day number:";
    int dayNumber;
    cin >> dayNumber;
    string dayName;
    switch (dayNumber) {
        case 1:
            dayName="sunday";
            cout << dayName;
            break;
        case 2:
            dayName="monday";
            cout << dayName;
            break;
        case 3:
            dayName="Tuesday";
            cout << dayName;
            break;
        case 4:
            dayName="wednesday";
            cout << dayName;
            break;

        case 5:
            dayName="Thrusday";
            cout << dayName;
            break;

        case 6:
            dayName="Friday";
            cout << dayName;
            break;
        case 7:
            dayName="saturday";
            cout << dayName;
            break;


        default:{
            cout << "the day entered by user doesnot exist";
            break;

        }
    }
    return 0;
}