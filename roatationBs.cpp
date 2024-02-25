#include<iostream>
#include<vector>
using namespace std;
int RotationsInArray(vector<int> &arr,int n){
     int low=0;
    int high =n-1;
    int ans=INT32_MAX;
    int index=-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[low]<=arr[high]){
         if(arr[low]<ans){
               index=low;
             ans=arr[low];
     
        }break;
        }
        
        
     
       
        if(arr[low]<=arr[mid]){
         if(arr[low]<ans){
             index=low;
             ans=arr[low];
       
        }
            low=mid+1;
        }
        else{
            high=mid-1;
           if(arr[mid]<ans){
             index=mid;
             ans=arr[mid];
       
        }
        }
    }
    return index;}
int main(){
    int n;
    cout<<"enter the no of elemenets:";
    cin>>n;
    vector<int> v;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        int q;
    cin>>q;
    v.push_back(q);
    }
    int noOfRotations=RotationsInArray(v,n);
    cout<<noOfRotations;
}