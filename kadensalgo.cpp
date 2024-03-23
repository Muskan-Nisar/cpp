#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int kadensalgo(vector<int> &arr,int n){
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0) sum=0;

    }
    return maxi;
}
int main(){
 int n;
 cout<<"enter the value of n:";
 cin>>n;
 
 cout<<"enter the elemenets of teh arr";
 vector<int> arr;
 for(int i=0;i<n;i++){
    int q;
    cin>>q;
    arr.push_back(q);
 }
 int ans= kadensalgo(arr,n);
 cout<<ans;
}