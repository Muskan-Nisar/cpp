#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Sortingthearray(vector<int> &arr,int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    vector<int> arr;
    cout<<"enter the elements of the arra:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    Sortingthearray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}