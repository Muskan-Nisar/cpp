#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"enter the dmensions of A:";
    cin>>r1>>c1;
    
     int A[r1][c1];
    
     for(int i =0;i<r1;i++){
     for(int j= 0;j<c1;j++){
        cin>>A[i][j];
     }}
     int r2,c2;
     cout<<"enter the dmensions of B:";
     cin>>r2>>c2;
      int B[r2][c2];
     for(int i =0;i<r2;i++){
     for(int j= 0;j<c2;j++){
        cin>>B[i][j];
     }}
     if(c1!=r2){
        cout<<"matrix not possible"<<endl;
     }
     else{
     int C[r1][c2];
   
     for(int i =0;i<r1;i++){
     for(int j= 0;j<c2;j++){
          int ans=0;
        for(int k =0;k<r2;k++){
        ans+=A[i][k]*B[k][j];
        }
        C[i][j]=ans;
     }
     }
     for(int i =0;i<r2;i++){
     for(int j= 0;j<c2;j++){
        cout<<C[i][j]<<" ";
     }cout<<endl;
     }
   }
}