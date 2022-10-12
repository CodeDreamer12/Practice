#include <iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int val){
      data=val;
      next=NULL;
  }
};
void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;
    }
    return prevptr;
}
bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deleteAtHead(head);
        return;
    }
  node* temp=head;
  while(temp->next->data!=val){
      temp=temp->next;
  }
  node* todelete=temp->next;
  temp->next=temp->next->next;
  delete todelete;
}
void sort1(node* &head){
    node *i,*j;
    i=head;
    for(i=head; i!=NULL; i=i->next){
        for(j=i->next; j!=NULL; j=j->next){
            if((i->data) > (j->data)){
                int temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
   node* head=NULL;
  insertAtTail(head,30);
  insertAtTail(head,10);
  insertAtTail(head,50);
  insertAtHead(head,40);
   display(head);
   sort1(head);
   display(head);
//   cout<<search(head,30);
//   deletion(head,30);
//   display(head);
//   deleteAtHead(head);
//   display(head);
//   node* newhead=reverse(head);
//   display(newhead);
    return 0;
}
