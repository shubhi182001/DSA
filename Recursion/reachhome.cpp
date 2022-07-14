#include<iostream>
using namespace std;

void reachhome(int src, int dest){
    
    if(src == dest ){
        cout<< "reached";
        return;
    }
    cout<<src<<"  "<<dest<<endl;
    reachhome(src+1, dest);
    return;
}


int main(){

    int dest = 10;
    int src = 1;
    reachhome(src, dest);

    return 0;
}