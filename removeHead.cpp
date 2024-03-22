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

void deleteFirstNode(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
Node* removetail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next; // Deleting the last node
    temp->next = nullptr; // Setting the next pointer of the second last node to nullptr
    return head;
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
    
    head=removetail(head);
    // cout<<head;
      printlinkedlist(head);
    return 0;
}
