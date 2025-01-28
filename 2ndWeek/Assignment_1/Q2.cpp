// Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.

#include<iostream>
using namespace std;
int main(){
    float r,pi,A,C;
    cout<<"Enter the value of radius : ";
    cin>>r;
    pi = 3.14;
    A = pi*r*r;
    C = 2*pi*r;
    cout<<"Area of the Circle is "<<A<<".\n";
    cout<<"Circumference of the Circle is "<<C<<".\n";
    if(A>C){
        cout<<"YES, numerically the area of this circle is larger than the circumference";
    }
}