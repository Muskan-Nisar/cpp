#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i ,int j, vector<int>& v){
    while(i<=j){

    
    int temp = v[i];
    v[i]= v[j];
    v[j]= temp;
      i++;
    j--;
}
return;
    cout<<endl;
  
}

void display(vector<int>& a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
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
    int k=2;
   int n =v.size();
   if(k>n) k=k%n;
    cout<<"half reverse part:";
    reversePart(0,n-k-1,v);
    display(v);
    cout<<"half reverse part:";
      reversePart(n-k,n-1,v);
      display(v);
      cout<<"full reverse part:";
        reversePart(0,n-1,v);
        display(v);
    
}