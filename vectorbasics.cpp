#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(19);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(18);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(17);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(59);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(39);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(139);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(193);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1934);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
    cout<<v[5]<<" ";
    cout<<v[6]<<" ";
    cout<<v[7]<<" ";
    


}