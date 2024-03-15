#include<iostream>
#include<vector>
using namespace std;
void reversedarray(vector<int> &arr,int m){
     int n=arr.size();  	
    int i=m+1;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int m;
    cout<<"enter the position after which you want to change for:";
    cin>>m;
    reversedarray(arr,m);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}