
#include<iostream>
#include<vector>
using namespace std;
 SearchMinimumElement(vector<int> &arr){
    int n=arr.size();
    int low=0;
    int high =n-1;
    int ans=INT32_MAX;
    while(low<=high){
        int mid= (low+high)/2;
        ans=min(ans,arr[mid]);
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            ans=min(ans,arr[mid]);
            high=high-1;
            low=low+1;
          
        }
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }
        else{
            ans=min(ans,arr[high]);
            high=mid-1;
        }
    }
    return ans;
 }
int main(){
    int n;
    cout<<"enter the no of elements:";
    cin>>n;
    vector<int> v;
    cout<<"enter the elemnts:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
   int minelements=SearchMinimumElement(v);
   cout<<minelements;
}