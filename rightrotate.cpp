#include<iostream>
#include<vector>
using namespace std;
void rightrotatearray(vector<int> &v,int n){
    int temp =v[n-1];
    for(int i=0;i<n;i++){
        v[i+1]=v[i];
    }
    v[0]=temp;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
     cout<<rightrotatearray(v,n);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
}