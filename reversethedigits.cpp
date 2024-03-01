#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int ans;
      int reverse=0;
    while(n>0){
     int lastDigit=n%10;
    //  ans=reverse;
    reverse=reverse*10+lastDigit;

     n=n/10;

    }
    cout<<reverse;
}