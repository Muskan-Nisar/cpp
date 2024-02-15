#include<iostream>
#include<vector>
using namespace std;
int Bs(vector<int> &nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;
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
    cout<<"enter the target:"<<endl;
    cin>>target;
    int targetIndex=Bs(v,target);
   cout<<targetIndex;
}