#include<iostream>
using namespace std;

int power(int n){
    if(n==0) return 1;
    int s = power(n-1);
    int b = 2*s;
    return b;
}

int main(){
    int n;
    cin>>n;
    int a = power(n);
    cout<<a;
    return 0;
}