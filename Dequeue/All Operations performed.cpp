#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *prev, *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;
int size=0;
bool Dqempty(){
    return front==NULL;
}
int Size(){
    return size;
}
int getFront(){
    if(Dqempty())
    return -1;
    else
    return front->data;
}
int getRear(){
    if(Dqempty())
    return -1;
    else
    return rear->data;
}
void insertFront(int data){
    struct Node *newNode=new Node;
    newNode->data=data;
    newNode->prev=newNode->next=NULL;
    if(newNode==NULL){
        cout<<"overflow";
        return;
    }
    else{
        if(Dqempty()){
            front=rear=newNode;
        }
        else{
        newNode->next=front;
        front->prev=newNode;
        front=newNode;
        }
        size++;
    }
}
void insertRear(int data){
     struct Node *newNode=new Node;
    newNode->data=data;
    newNode->prev=newNode->next=NULL;
    if(newNode==NULL){
        cout<<"overflow";
        return;
    }
    else{
         if(Dqempty()){
            front=rear=newNode;
        }
        else{
            newNode->prev=rear;
            rear->next=newNode;
            rear=newNode;
        }
        size++;
    }
}
void deleteFront(){
    if(Dqempty()){
        cout<<"underflow";
        return;
    }
    else{
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        else{
            front->prev=NULL;
        }
        size--;
    }
}
void deleteRear(){
     if(Dqempty()){
        cout<<"underflow";
        return;
    }
    else{
        rear=rear->prev;
        if(rear==NULL){
            front=NULL;
        }
        else{
            rear->next=NULL;
        }
        size--;
    }
    
}
int main(){
    insertFront(1);
     insertFront(2);
      insertRear(3);
      cout<<getFront()<<endl;
      cout<<getRear()<<endl;
      deleteFront();
      deleteRear();
      cout<<getFront()<<endl;
      cout<<Size()<<endl;
      cout<<Dqempty()<<endl;
    
    
}
