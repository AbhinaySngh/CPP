//WAP to find the difference between ASCII of two characters ,take them as input .

#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    cout<<"Enter 1st Character : ";
    cin>>ch1;
    cout<<"Enter 2nd Character : ";
    cin>>ch2;
    int x = (int)ch1;
    int y = (int)ch2;
    cout<<"The difference between two character is "<<x-y<<".";
}