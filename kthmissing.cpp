#include<iostream>
#include<vector>
using namespace std;
  int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        int kth=high+1+k;
        return kth;
    }
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int kthmissingno=findKthPositive(arr,k);
    cout<<kthmissingno;
}