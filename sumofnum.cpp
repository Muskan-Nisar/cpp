#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
        ans=ans+lastdigit;
        n=n/10;
    }
    cout<<ans;
}