//Take 2 integers input and print the greatest of them

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    if(x>y){
        cout<<"x is greatest.";
    } else{
        cout<<"y is greatest.";
    }
}