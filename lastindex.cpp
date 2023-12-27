#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    // **********forward looping*****
    //  v.push_back(9);
    //  v.push_back(10);
    //  v.push_back(6);
    //  v.push_back(1);
    //   v.push_back(6);
    //    v.push_back(6);
    //    int x;
    //    cin>>x;
    //    int index=-1;
    //    for(int i =0;i<v.size();i++){
    //     if(v[i]==x) index=i;
    //    }
    //    cout<<index;


    // *************backward loopping************
    v.push_back(9);
     v.push_back(10);
     v.push_back(6);
     v.push_back(1);
      v.push_back(6);
       v.push_back(6);
       int x;
       cin>>x;
       int index=-1;
       for(int i =v.size()-1;i>=0;i--){
        if(v[i]=x) index=i;
        break;
       }
       cout<<index;

       }