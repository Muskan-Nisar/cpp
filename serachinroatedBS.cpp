#include<iostream>
#include<vector>
using namespace std;
int searchFromRotatedarray(vector<int> &nums,int target){
    int n =nums.size();
    int low=0;
    int high =n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(nums[mid]==target) return mid;
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && target<=high){
                low=mid+1;
            }
            else{
                high =mid-1;
            }
        }
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
    cout<<"enter the target:";
    cin>>target;
    int searchIndex=searchFromRotatedarray(v,target);
    cout<<searchIndex;
}