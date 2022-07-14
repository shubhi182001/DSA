#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int k){
    if(size==0) return false;
    if(arr[0] == k) return true;
    else{
        bool ans = linearsearch(arr+1,size-1,k);
        return ans;
    }
}

int main(){

    int arr[5] = {3,4,5,2,1};
    int size = 5;
    int key = 3;
    cout<<linearsearch(arr,size,key);

    return 0;
}