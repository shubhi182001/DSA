#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
    int a=10;
    int *p;
    p =&a;
    cout<<p<<endl; //it will give address
    cout<<*p<<endl; //dereferencing
    cout<<&a<<endl;

    int b[5] = {2,3,4,5,6};
    int *q;
    q = b;

    for(int i =0; i<5; i++){
        cout<<q[i]<<endl;
    }

    //creating an array inside heap using malloc:
    int *s;
    s = (int *) malloc (5*sizeof(int));
    s[0]=10;
    s[1]=2;
    s[2]=4;
    s[3]=5;
    s[4]=6;

    for(int i=0; i<5; i++){
        cout<<s[i]<<endl;
    }

    int *p1;
    char *p2;
    float *p3;
    double *d1;
    cout<<sizeof(p1);
    cout<<sizeof(p2);
    cout<<sizeof(p3);
    cout<<sizeof(d1);

    free(p);
    return 0;
}