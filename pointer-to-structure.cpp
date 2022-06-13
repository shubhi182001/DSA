#include<iostream>
#include<stdio.h>
using namespace std;

struct Rect{
    int l;
    int b;
};

int main(){
    Rect r ={10,5};
    cout<<r.l<<endl;

    Rect *p = &r;
    cout<<p->l<<endl;
    cout<<p->b<<endl;


//dynamic allocation of structure rectangle:
    Rect *q;
    q = (struct Rect *) malloc(sizeof(struct Rect));
    q->l = 13;
    q->b =15;
    cout<<q->l<<endl;


    //dynamic allocation in heap c++:
    Rect *y;
    y = new Rect;
    cout<<y->l;
    

    return 0;
}