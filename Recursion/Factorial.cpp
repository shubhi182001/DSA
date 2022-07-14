#include<iostream>
#include<stdio.h>
using namespace std;

int factorial(int n){
    
    if(n==0) return 1;     
    int ans = factorial(n-1);
    int b = n* ans;
    return b;
}


int main(){
    int n;
    cin>>n;
    int a = factorial(n);
    cout<<a<<endl;
    return 0;
}