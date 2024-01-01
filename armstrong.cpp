#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int temp=n;
    int sum =0;
    int count = 0;
      int ld;
      while(n>0){
        n=n/10;
        count++;
      }
    while(n>0){
      ld=n%10;
        count =count +1;
   sum= sum + pow(ld,count);
        n=n/10;
           
    }
      
    if(temp==sum){
        cout<<"armstrong";
    }
    else{
        cout<<"no";
    }
}