// Any year is input through the keyboard. Write a program to determine whether the year is a leap year
// or not. (Considering leap year occurs after every 4 years)

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter any Year : ";
    cin>>x;
    if(x%4==0){
        cout<<"Entered Year is a Leap Year.";
    } else{
        cout<<"Entered Year is not a Leap Year.";
    }
}