#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};
void removeDuplicates(Node* head){
    Node* ptr1;
    ptr1=head;
    // BASE CASE
    if(head == NULL) return;
    while(ptr1 != NULL && ptr1->next != NULL){
       Node* ptr2 = ptr1;
       while(ptr2->next != NULL){
        if(ptr1->data == ptr2->next->data){
           Node* dup=ptr2->next;
            ptr2->next=ptr2->next->next;
            delete dup;

        }
        else{
            ptr2=ptr2->next;
        }
       }
       ptr1 =ptr1->next;
    }
}
int print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(12);
    // head->next = new Node(11);
    // head->next->next = new Node(11);
    // head->next->next->next = new Node(12);
    // head->next->next->next->next = new Node(11);
    // head->next->next->next->next->next=new Node(10);

    removeDuplicates(head);
    print(head);
}