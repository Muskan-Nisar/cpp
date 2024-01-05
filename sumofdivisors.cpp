#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int totalsum =0 ;
    for(int num =1;num<=n;num++){
        int currentSum=0;
        for(int i =1;i<=num;i++){
            if(num%i==0){
            currentSum +=i;
        }}
        cout<<"the sum of divsors of "<<num<<":"<<currentSum<<endl;
        
    totalsum +=currentSum;
    }
     cout<<"the sum of divsors of 1 - "<<n<<":"<<totalsum;
}