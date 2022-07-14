#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }


    node* add(int data, node* head){
        if(head == NULL){
            node* temp = new node(data);
            head = temp;
        }
        else{
            node* temp = head;
            while (temp->next!=NULL)        
            {
                temp = temp -> next;
            }
            temp->next = new node(data);
        }
        return head;
    }
        void print (node *head){
            node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp =temp -> next;
            }
        }
};

int main(){
    node *head = NULL;
    head = head->add(2,head);
    head = head->add(25,head);
    head = head->add(4,head);
    head = head->add(3,head);
    head->print(head);

}