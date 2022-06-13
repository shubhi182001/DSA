#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    // for(int i=0; i<n; i++){
    //     cout<<A[i];
    // }
    
    // in c++ we have a foreach loop:
    for(int x:A){
        cout<<x<<endl;
    }
    
    return 0;
}