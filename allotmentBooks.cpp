#include<iostream>
#include<vector>
using namespace std;
int findstudent(vector<int> &arr, int pages) {
    int n=arr.size();
    int pagesPerS=0;
    int students =1;
    for(int i=0;i<n;i++){
        if(pagesPerS+arr[i]<=pages){
            pagesPerS+=arr[i];
        }
        else{
            students++;
            pagesPerS=arr[i];
        }
    }
    return students;

}
int allotingbooks(vector<int> &arr,int n,int m){
    if(m>n) return -1;
    int low = INT16_MIN;
  int high = 0;
  for (int i = 0; i < n; i++) {
    low = max(low, arr[i]);
    high = high + arr[i];
  }
  while (low <= high) {
    int mid = (low + high) / 2;
    int students = findstudent(arr, mid);
    if (students > m) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return low;
}
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int m;
    cout<<"enter toatl no of students:";
    cin>>m;
    vector<int> arr;
    cout<<"enter pages :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int minimumofmax=allotingbooks(arr,n,m);
    cout<<minimumofmax;
}