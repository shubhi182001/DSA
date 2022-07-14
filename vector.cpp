#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v ){
    for(int i=0 ; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> vec1;
    int element;
    for(int i=0; i<4; i++){
        cout<<"enter an element to add to vector:";
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iterator = vec1.begin();
    vec1.insert(iterator+3,5, 566);
    display(vec1);
    return 0;
}