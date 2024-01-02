#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the digits"<<endl;
    cin>>N;
    int count=0;
    while(N>0){
        int lastDigit=N%10;
        count=count+1;
        N=N/10;
    }
    cout<<count;
    }