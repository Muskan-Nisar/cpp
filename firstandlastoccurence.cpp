#include<iostream>
#include<vector>
using namespace std;
 int lower_bound(vector<int> &v,int target,int n){
    int low=0;
    int high =n-1;
    int ans=n;
    while(low<=high){
    int mid=(low+high)/2;

    if(v[mid]>=target) {
        ans=mid;
        high=mid-1;}
        else{
            low=mid+1;
        }}
        return ans;
}
int upper_bound(vector<int> &v,int target,int n){
    int low=0;
    int high =n-1;
    int ans=n;
    while(low<=high){
    int mid=(low+high)/2;

    if(v[mid]>target) {
        ans=mid;
        high=mid-1;}
        else{
            low=mid+1;
        }}
        return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr,  int k,int n)
{
    // Write your code here
    int lb=lower_bound(arr,k,n);
    int up=upper_bound(arr,k,n);
    if(lb==n || arr[lb]!=k) return {-1,-1};
    return {lb,up-1};
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
    pair<int, int> occurrence = firstAndLastPosition(v, target, n);
    cout << "First occurrence: " << occurrence.first << ", Last occurrence: " << occurrence.second << endl;
    return 0;
}