#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> &arr,int n,int x){
    int low=0;
    int high =n-1;
    int ans=n;
    while (low<=high)
    {
        int mid=(low+high)/2;
    if(arr[mid]>=x){
        ans=mid;
        high=mid-1;
    } 
    else{
        low=mid+1;}
    }
 return ans;
    
}
int maxNoOfOnes(vector<vector<int>> &matrix,int n,int m){
    int max_count =0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count =m-lowerBound(matrix[i],m,1);
        if(count>max_count){
            max_count=count;
            index=i;
        }
    }
    return index;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int m;
    cout<<"enter the value of m";
    cin>>m;
      vector<vector<int>>v(n,vector<int> (m));
      cout<<"enter the elemenents of matrix";
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
      }
      int indexConatiningMaxOnes=maxNoOfOnes(v,n,m);
      cout<<indexConatiningMaxOnes;
}