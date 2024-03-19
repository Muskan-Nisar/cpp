#include<iostream>
#include<vector>
using namespace std;
int MooresVoting(vector<int> &v,int n){
    int el;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=v[i];
        }
        else if(v[i]==el) cnt++;
        else cnt--;
    }
    int cnt1;
    for(int i=0;i<n;i++){
        if(v[i]==el) cnt1++;
        if(cnt1>n/2) return el;
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int> arr;
    cout<<"enter the elemenets of the arr:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    
int ans=MooresVoting(arr,n);
  cout<<ans;
}