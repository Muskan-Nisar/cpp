#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the values of n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}