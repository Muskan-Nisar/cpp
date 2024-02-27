#include<iostream>
#include<vector>
using namespace std;
int FindPeak(vector<int> &arr){
    int n=arr.size();
    if(n==1) return 0;
    if(arr[0]>arr[1])return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid]>arr[mid]-1){
            low=mid+1;
        }
        else if (arr[mid]>arr[mid+1]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the  number of elements:";
    cin>>n;
    vector<int> v;
    cout<<"enter the elemets:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int peak =FindPeak(v);
    cout<<peak;
}