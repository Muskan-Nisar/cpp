#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter the dimensions of matrix:";
    cin>>n>>m;
    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }

    }
    int transpose[m][n];
     for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=arr[j][i];
        }

    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
       cout<<endl;
    }

}