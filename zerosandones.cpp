#include<iostream>
#include<vector>
using namespace std;
void sortZerosAndOnes(vector<int> &v){
    // int count= 0;
    // for(int q:v){
    //     if(q==0) {
    //          count ++;}
    // }
    // for(int i=0;i<v.size();i++){
    //     if(i<count) {
    //         v[i]=0;
    //     }
    //     else{
    //         v[i]=1;
    //     }
    // }

    // two pointers
    int left_pointer=0;
    int right_pointer=v.size()-1;
    while(left_pointer<right_pointer){
        if(v[left_pointer]==1 && v[right_pointer]==0){
            v[left_pointer++]=0;
            v[right_pointer--]=1;
        }
        if(v[left_pointer]==0){
            left_pointer++;
        }
        if(v[right_pointer]==1){
            right_pointer--;
        }
    }
 return;
}
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector <int> v;
      cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sortZerosAndOnes(v);
    for(int i= 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}