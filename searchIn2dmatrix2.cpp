#include<iostream>
#include<vector>
using namespace std;
bool thetargetispresentornot(vector<vector<int>> &matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();
    int row=0;
    int col=m-1;
    while(row<n && col>=0){
        if(matrix[row][col]==target) return true;
        else if(matrix[row][col]<target) row++;
        else{
            col--;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    vector<vector<int>>v(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
        
    }
    int target;
    cout<<"enter the target";
    cin>>target;
    int ans=thetargetispresentornot(v,target);
    cout<<ans;
}