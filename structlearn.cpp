#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next =next1;
    }
    public:
    Node(int data1){
        data =data1;
        next=nullptr;
    }
};
int main(){
    vector<int> arr={6,2,3,4,5};
    Node* y= new Node(arr[0]);
    cout<<y->data;
}