#include<iostream>
#include<vector>
using namespace std;
int noofpainter(vector<int> &arr, int units) {
    int unitsPerP=0;
    int painters=1;
    for(int i=0;i<arr.size();i++){
        if(unitsPerP+arr[i]<=units){
            unitsPerP+=arr[i];
        }
        else{
            painters++;
            unitsPerP=arr[i];
        }
    }
    return painters;
}
int findminimutime(vector<int> &arr, int n, int m) {
    if (m > n) return -1;

     int low = INT16_MIN;

  int high = 0;
  for (int i = 0; i < n; i++) {
    low = max(low, arr[i]);
    high = high + arr[i];
  }
  while (low <= high) {
    int mid = (low + high) / 2;
    int painters = noofpainter(arr, mid);
    if (painters > m) {
            low = mid + 1;
    } else {
            high = mid - 1;
    }
  }
  return low;
}
 int splitArray(vector<int>& nums, int k) {
        return findminimutime(nums,nums.size(),k);
        
    }
    int main(){

      int n;
    cout<<"enter value of n:";
    cin>>n;
    int m;
    cout<<"enter toatl no of painters:";
    cin>>m;
    vector<int> arr;
    cout<<"enter units :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int minimumofmax=splitArray(arr,m);
    cout<<minimumofmax;
}