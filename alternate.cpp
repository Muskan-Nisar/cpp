#include<iostream>
#include<vector>
using namespace std;
void alternativeSwap(vector<int> &arr,int n){
    int i=0;
    int j=1;
    while (i<n && j<n)
    {
        swap(arr[i],arr[j]);
        i=i+2;
        j=j+2;
    }
  
    
}
int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    vector<int> arr;
    cout<<"enter the lements of the array:";
    for(int i=0;i<n;i++){
      int q;
      cin>>q;
      arr.push_back(q);
    }
    alternativeSwap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}