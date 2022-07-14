#include<iostream>
#include<stdio.h>
using namespace std;

void swap1(int x, int y){    //value
    int temp;
    temp =x;
    x=y; 
    y =temp;
}
void swap2(int *x, int *y){   //address
    int temp;
    temp = *x;
    *x=*y; 
    *y =temp;
}
void swap3(int &x, int &y){   //reference
    int temp;
    temp = x;
    x=y; 
    y =temp;
}


int main(){
    int a=10;
    int b=20;
    swap1(a,b);   //call by value
    cout<<a<<" "<<b;
    swap2(&a,&b);   //call by address
    cout<<a<<" "<<b;
    swap3(a,b);   //call by reference
    cout<<a<<" "<<b;
    return 0;
}