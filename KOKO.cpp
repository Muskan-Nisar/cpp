#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int findmax(vector<int> &v){
    int n=v.size();
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    return maxi;
}
long long calculateTotalHours(vector<int> &v,int hourly){
    long long totalH=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        totalH=totalH+ceil((double)v[i]/(double)hourly);
    }
    return totalH;
}
int minEatingbananas(vector<int> &v,int h){
    int low=1,high=findmax(v);
    while(low<=high){
        int mid=(low+high)/2;
        long long  totalH = calculateTotalHours(v,mid);
        if(totalH<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     
            }
               return low;
}
int main(){
    int n;
    cout<<"enter the value of n:";

    cin>>n;
    int k;
    cout<<"enter total hours:";
    cin>>k;
    vector<int> v;
    cout<<"enter the no of bananas in each pile:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    long long totalBanans=minEatingbananas(v,k);
    cout<<totalBanans;
}