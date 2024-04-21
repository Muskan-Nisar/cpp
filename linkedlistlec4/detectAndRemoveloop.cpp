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

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
     }
void insertAtTail(Node* &tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertAtPositin(Node* &tail,Node* &head,int position,int d){
 if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp =head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
 Node* nodeToInsert =new Node(d);
 nodeToInsert->next=temp->next;
 temp->next=nodeToInsert;
}
Node* ExistenceOfLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow != NULL   && fast != NULL){
        fast = fast->next;
    
     if(fast != NULL){
        fast = fast->next;
    }
    slow=slow->next;
    if (slow == fast) {
        return slow;
    }
}
    return NULL;
}
Node* getTheStartingNode(Node* head){
    if(head == NULL) {
        return NULL;
    }
  Node* Intersection=ExistenceOfLoop(head);
  if(Intersection == NULL){
      return NULL;
  }
  Node* slow=head;
  while(slow != Intersection){
      slow =slow->next;
      Intersection = Intersection ->next;
  }
  return slow;
}
Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head == NULL){
        return NULL;
    }
    Node* startingPoint = getTheStartingNode(head);
    if(startingPoint == NULL) {
        return head;
    }
    Node* temp =startingPoint;
    while(temp->next != startingPoint){
        temp=temp->next;
    }
    temp->next = NULL;
    return head;
}
void print(Node* &head){
    Node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
     int main(){
    Node* node1=new Node(10);
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    // Check if there is a loop 
    // n the linked list
    if (ExistenceOfLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    Node* headofloop=getTheStartingNode(head);
    cout<<headofloop->data<<" ";

    removeLoop(head);
    print(head);

    // Node* headdofloop=getTheStartingNode(head);
    // cout<<headdofloop->data<<" ";
     if (ExistenceOfLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }
     }