#include<iostream>
#include<vector>
using namespace std;


struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void printlinkedlist(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeKelement(Node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node*temp =head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp =head;
    Node* prev=NULL;
    while(temp!=NULL){
     cnt++;
     if(temp->data==k){
        prev->next=prev->next->next;
        free(temp);
        break;
     }
     prev=temp;
     temp=temp->next;
    }
}


int main() {
    vector<int> arr = {1, 2, 4, 5};

    // Creating linked list from vector
    Node* head = nullptr;
    for (int i = arr.size() - 1; i >= 0; i--) {
        head = new Node(arr[i], head);
    }

    cout << "Original Linked List: ";
    printlinkedlist(head);

    // Deleting first node
    // deleteFirstNode(head);

    cout << "Linked List after deleting first node: ";
    printlinkedlist(head);
    
    // head=removetail(head);
    // cout<<head;
     
      removeKelement(head,2);

       printlinkedlist(head);
    return 0;
}