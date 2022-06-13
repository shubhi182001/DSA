#include<iostream>
#include<stdio.h>
using namespace std;

struct Rect{
    int l;
    int b;
    char x;
};

int main(){
    struct Rect r1 = {10,5};
    printf("%d", sizeof(r1));
    r1.x='h';
    cout<<r1.l;
    cout<<r1.x;
    return 0;
}