#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
void reverse(int i ,int j,vector<int>& v){
    while(i<=j){
     int temp = v[i];
     v[i] = v[j];
     v[j] = temp;
     i++;
     j--;
}
cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(19);

    v.push_back(18);

    v.push_back(17);

    v.push_back(59);

    v.push_back(39);

    v.push_back(139);

    v.push_back(193);
    display(v);
    reverse(0,2,v);
    display(v);
    }