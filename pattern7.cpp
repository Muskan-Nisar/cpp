#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0 && j%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"2"<<" ";
            }
        }
        cout<<endl;
    }
}