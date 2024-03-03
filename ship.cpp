#include<iostream>
#include<vector>
using namespace std;
int findreq(vector<int> &weights,int cap){
       int n=weights.size();
    int load=0;
    int days=1;
    for(int i=0;i<n;i++){
        if((weights[i]+load)>cap){
            days=days+1;
            load=weights[i];
        }
        else{
            load=load+weights[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights,int days){
    int n=weights.size();
    int low=INT32_MIN;
    int high=0;
    for(int i=0;i<n;i++){
        high=weights[i]+high;
        low=max(low,weights[i]);
    }
    while(low<=high){
        int mid=(low+high)/2;
        int noOfReq=findreq(weights,mid);
        if(noOfReq<=days){
            high=mid-1;
        }
        else{
            low=mid+1;}

    }
    return low;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int days;
    cout<<"enter the values of days:";
    cin>>days;
    vector<int> weights;
    cout<<"enter the weights of the products:";
    // cin>>weights;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        weights.push_back(q);

    }
    int leastcap=leastWeightCapacity(weights,days);
    cout<<leastcap;
}