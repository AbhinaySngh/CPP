// If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.

#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"marks of A = ";
    cin>>A;
    cout<<"marks of B = ";
    cin>>B;
    cout<<"marks of C = ";
    cin>>C;
    if(A<B && A<C){
        cout<<"marks of A is least.";
    } else if(B<A && B<C){
        cout<<"marks of B is least";
    } else{
        cout<<"marks of C is least";
    }
}