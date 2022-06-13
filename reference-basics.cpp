#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;
    // a=23;
    int b=30;
    r=b;

    cout<<r<<endl;
    cout<<a;
    return 0;
}