#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int cowsplace(vector<int> &stalls, int dist, int k) {
    int countcow=1;
    int last=stalls[0];
    int n=stalls.size();
    for(int i=1;i<n;i++){
        if(stalls[i]-last>=dist){
            countcow++;
            last=stalls[i];
        }
        if(countcow>=k) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k) {
  //    Write your code here.
  int n = stalls.size();
  sort(stalls.begin(), stalls.end());
  int low = 1;
  int high = stalls[n - 1] - stalls[0];
  while (low <= high) {
    int mid = (low + high) / 2;
    if (cowsplace(stalls, mid, k) == true) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high;
}
int main(){
    int n;
    cout<<"enter the size of n:";
    cin>>n;
    vector<int> stalls;
    int k;
    cout<<"enter number of cow:";
    cin>>k;
    cout<<"enter the elemets:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        stalls.push_back(q);

    }
    int distance=aggressiveCows(stalls,k);
    cout<<distance;
}