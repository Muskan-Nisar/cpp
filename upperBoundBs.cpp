#include<iostream>
#include<vector>
using namespace std;
int upper_bound(vector<int> &v,int target,int n){
    int low=0;
    int high =n-1;
    int ans=n;
    while(low<=high){
    int mid=(low+high)/2;

    if(v[mid]>target) {
        ans=mid;
        high=mid-1;}
        else{
            low=mid+1;
        }}
        return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);

    }
    int target;
    cout<<"enter the target";
    cin>>target;
    int upperBoundIndex=upper_bound(v,target,n);
    cout<<upperBoundIndex;
}
