#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;
int sumOf(vector<int> &arr,int divi){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+ceil((double)arr[i]/(double)divi);
    }
    return sum;
}
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();
        if(n>threshold) return -1;
        int low=1;
        int high=INT16_MIN;
        for(int i=0;i<n;i++){
            high=max(high,arr[i]);
        }
        while(low<=high){
            int mid=(low+high)/2;
        if(sumOf(arr,mid)<=threshold){
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
    cout<<"enter the value of n";
    cin>>n;
    vector<int> v;
    cout<<"enter the elements of v:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int threshold;
    cout<<"enter the value of threshold:";
    cin>>threshold;
    int ans=smallestDivisor(v,threshold);
    cout<<ans;

}