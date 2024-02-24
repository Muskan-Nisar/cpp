#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int> arr, int n, int x) 
{
 int low=0;
 int high =n-1;
 int first =-1;
 while(low<=high){
     int mid= (low+high)/2;
     if(arr[mid]==x){
         first =mid;
         high = mid-1;
     }
     else if(arr[mid]<x){
         low=mid+1;
     }
     else{
         high = mid-1;
     }
 }
 return first;


}
int lastoccurence(vector<int> arr, int n, int x) 
{
 int low=0;
 int high =n-1;
 int last=-1;
 while(low<=high){
     int mid= (low+high)/2;
     if(arr[mid]==x){
         last =mid;
          low=mid+1;
     }
     else if(arr[mid]>x){
        high = mid-1;
     }
     else{
         
          low=mid+1;
     }
 }
 return last;


}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  // Write your code here
  int fo=firstoccurence( arr, n, k);
  if(fo == -1) return {-1,-1};
  int lo =lastoccurence(arr, n,k);
  return {fo ,lo};
}
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	pair<int,int> ans=firstAndLastPosition(arr, n, x);
	if (ans.first == -1) return 0;
	return ans.second -ans.first +1;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    int Tcount = count(v, n,target);
    cout <<Tcount<< endl;
    return 0;
}
