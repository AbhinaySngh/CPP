// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main(){
    int l,b,A,P;
    cout<<"Enter the length of Rectangle : ";
    cin>>l;
    cout<<"Enter the breath of Rectangle : ";
    cin>>b;
    A = l*b;
    P = 2*(l+b);
    cout<<"Area of the Rectangle is "<<A<<".\n";
    cout<<"Perimeter of the Rectangle is "<<P<<".\n";
    if(A>P){
        cout<<"The Area of the Rectangle is greater than its Perimeter.";
    }
}