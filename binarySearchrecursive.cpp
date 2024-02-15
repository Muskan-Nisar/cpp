#include<iostream>
#include<vector>
using namespace std;
int Bs(vector<int> &nums,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target) return Bs(nums,mid+1,high,target);
   return Bs(nums,low,mid-1,target);
}
int Binaryserch(vector<int> &nums,int target){
    return Bs(nums,0,nums.size()-1,target);
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
    int targetIndex=Binaryserch(v,target);
   cout<<targetIndex;
}