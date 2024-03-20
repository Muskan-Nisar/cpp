#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
  
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int lengthOfLinkedList(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != nullptr){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main(){
    vector<int> arr = {2, 3, 4, 7};
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    
    // Print the length of the linked list
    cout << lengthOfLinkedList(head) << '\n';
}
