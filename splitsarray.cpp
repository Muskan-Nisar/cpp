#include<iostream>
#include<vector>
using namespace std;
int noofsplit(vector<int> &arr, int units) {
    int noOfnumPerS=0;
    int splits=1;
    for(int i=0;i<arr.size();i++){
        if(noOfnumPerS+arr[i]<=units){
           noOfnumPerS+=arr[i];
        }
        else{
            splits++;
            noOfnumPerS=arr[i];
        }
    }
    return splits;
}
int findminiMaxarr(vector<int> &arr, int n, int m) {
    if (m > n) return -1;

     int low = INT16_MIN;

  int high = 0;
  for (int i = 0; i < n; i++) {
    low = max(low, arr[i]);
    high = high + arr[i];
  }
  while (low <= high) {
    int mid = (low + high) / 2;
    int subarray = noofsplit(arr, mid);
    if (subarray > m) {
            low = mid + 1;
    } else {
            high = mid - 1;
    }
  }
  return low;
}int largestSubarraySumMinimized(vector<int> a, int k) {
    // Write Your Code Here
    return findminiMaxarr(a,a.size(),k);
}
 int main(){

      int n;
    cout<<"enter value of n:";
    cin>>n;
     cout<<"enter toatl no of integers:";
     int m;
    cin>>m;
    vector<int> arr;
    cout<<"enter elements :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int minimumofmax=largestSubarraySumMinimized(arr,m);
    cout<<minimumofmax;
} 
  