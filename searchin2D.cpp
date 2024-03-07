#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m =matrix[0].size();
        int low=0;
        int high =(n*m)-1;
         
       
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<=target) low=mid+1;
            else high=mid-1;

        }
        return false;

    }
    int main(){
         int n;
    cout<<"enter the value of n:";
    cin>>n;
    int m;
    cout<<"enter the value of m";
    cin>>m;
    int target;
    cin>>target;
      vector<vector<int>>v(n,vector<int> (m));
      cout<<"enter the elemenents of matrix";
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
      }
      int thetargetis=searchMatrix(v,target);
      cout<<thetargetis;
}
    