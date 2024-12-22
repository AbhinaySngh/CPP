// Write a program to find the circumference of a circle with radius 10 in C++.

#include<iostream>
using namespace std;

int main(){
    float circ, pi, rad;
    pi = 3.1415;
    cout<<"Enter the value of radius : ";
    cin>> rad;
    circ = 2 * pi * rad;
    cout<<"The circumference of a circle is " <<circ; 
}