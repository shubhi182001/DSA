#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){
    if(s>e) return false;
    int mid = s+(e-s)/2;
    if(arr[mid] == k) return true;
    else if(arr[mid]<k){
        return binarySearch(arr, mid+1,e,k);
    }
    else{
        return binarySearch(arr,s ,mid-1,k);
    }
}

int main(){

    int arr[5] = {1,4,5,6,7};
    int size = arr[4];
    int start = arr[0];
    int key = 7;
    cout<<binarySearch(arr, start, size, key);



    return 0;
}