#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void Sortedsqaures(vector<int> &v){
    vector<int> ans;
    int left_pointer=0;
    int right_pointer=v.size()-1;
    while(left_pointer<=right_pointer){
        if(abs(v[left_pointer])<v[right_pointer]){
            ans.push_back(v[right_pointer]*v[right_pointer]);
            right_pointer--;
        }
        else{
            ans.push_back(v[left_pointer]*v[left_pointer]);
          left_pointer++;
        }
}
  reverse(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int> v;
    cout<<"enter the elemenets:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    Sortedsqaures(v);}