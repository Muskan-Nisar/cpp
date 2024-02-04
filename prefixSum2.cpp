#include<iostream>
#include<vector>
using namespace std;
int rectangleSum(vector<vector<int>> &matrix,int l1,int l2,int r1,int r2){
    int sum=0;
    // for(int i=l1;i<=l2;i++){
    //     for(int j=r1;j<=r2;j++){
    //     //  cin>>matrix[i][j];
    //     sum+=matrix[i][j];
    //     }
    // }
    // return sum;
    for (int i=0;i<matrix.size();i++){
        for(int j = 1;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    for (int i=1;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    // for(int i =l1;i<=l2;i++){
    //     // for(int j=r1;j<=r2;j++){
    //         if(r1!=0){
    //         sum+=matrix[i][r2]-matrix[i][r1-1];
    //     }
    //     else{
    //         sum+=matrix[i][r2];
    //     }
        
    // }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    int topsum=0,leftsum=0,topleftsum=0;
   if(l1!=0) topsum=matrix[l1-1][r2];
   if(r1!=0) leftsum=matrix[l2][r1-1] ;
   if(l1!=0 && r1!=0) topleftsum=matrix[l1-1][r1-1];
    sum=matrix[l2][r2]-topsum-leftsum+topleftsum;
     return sum;
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cin>>matrix[i][j];
        }
    }
    
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
        } cout<<endl;
    }
   int sum=rectangleSum(matrix,l1,l2,r1,r2);
   cout<<sum;
}