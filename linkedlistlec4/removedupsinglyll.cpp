#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data =data;
        this-> next=NULL;
    }
};
Node* removeDuplicates(Node *head)
{
    // Write your code here
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        if((curr->next != NULL ) && curr->data != curr->next->data){
            Node* next_next =curr->next->next;
            Node* deleteNode=curr->next;
            delete (deleteNode);
            curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

 void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

  }
     int main(){
    Node* node1=new Node(10);
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(3);
    removeDuplicates(head);
    print(head);
     }