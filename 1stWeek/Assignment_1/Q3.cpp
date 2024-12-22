// How much space does the following data types take?
// int
// bool
// float

#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<sizeof(x)<<endl;      //in byte

    bool y;
    cout<<sizeof(y)<<endl;      //in byte

    float z;
    cout<<sizeof(z);            //in byte
}