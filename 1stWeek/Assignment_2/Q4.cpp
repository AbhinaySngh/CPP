//WAP for finding the volume of the cylinder by taking radius and height as input.

#include<iostream>
using namespace std;
int main(){
    int r,h,V;
    cout<<"Enter the radius : ";
    cin>>r;
    cout<<"Enter the height : ";
    cin>>h;
    float pi = 3.147;
    V = pi*r*r*h;
    cout<<"Volume of the Cylinder is "<<V<<".";
} 
