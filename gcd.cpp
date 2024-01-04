#include<iostream>
using namespace std;
int main(){
    // 1 formula burute force
    int n1,n2;
    cin>>n1;
    cin>>n2;
    // for(int i =1;i<min(n1,n2);i++){
    //     if(n1%i==0 && n2%i == 0){
    //         cout<<i;
    //     }
    // }
    while(n1 >0 && n2>0){
      if(n1>n2){
        n1= n1%n2;
        cout<<n1;
      }
      else{
        n2 =n2%n1;
        cout<<n2;
      }}
      if(n1==0){
        cout<<n2;
      }
      else{
        cout<<n1;
      
    }
}