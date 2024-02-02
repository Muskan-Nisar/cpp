#include<iostream>
#include<vector>
using namespace std;
int maxOnesRow(vector<vector<int>> &v){
    int maxrows=INT16_MIN;
    int maximumonesrow=-1;
    int coloumns=v[0].size();
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        if(v[i][j]==1){
            int numrows=coloumns-j;
            if(numrows>maxrows){
                maxrows=numrows;
                 maximumonesrow=i;
            }
            break;
        }
       
    }
}
return maximumonesrow;
}
int main(){
    int n;
    cout<<"enter the size of rows:";
    cin>>n;
    int m;
    cout<<"enter the sizze of the col:";
    cin>>m;
    vector<vector<int>>v(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }

    }
    int result=maxOnesRow(v);
    cout<<result;
}