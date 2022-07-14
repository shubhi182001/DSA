#include<iostream>
using namespace std;


void selectionsort(int* arr ,int i, int size){
    int min  = i;
    for(int j =i+1 ; j<size; j++){
        if(arr[j]<arr[min]){
            min = j;
        }
    }
    swap(arr[i], arr[min]);
    if(i+1!=size){
        selectionsort(arr, i+1 , size);
    }
}

int main(){



    int arr[6] = {5,3,2,1,6,0};
    int size = 6;
    selectionsort(arr,0,6);
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    

    return 0;
}