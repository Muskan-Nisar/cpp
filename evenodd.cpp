#include<iostream>
#include<vector>
using namespace std;
void sortEvenAndOdd(vector<int> &v){
    int left_pointer=0;
    int right_pointer=v.size()-1;
    while(left_pointer<right_pointer){
    if(v[left_pointer]%2==1 && v[right_pointer]%2==0){
        swap(v[left_pointer],v[right_pointer]);
        left_pointer++;
         right_pointer--;
    }
    if(v[left_pointer]%2==0){
        left_pointer++;
    }
    if(v[right_pointer]%2==1){
        right_pointer--;
    }
}
return;
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
    sortEvenAndOdd(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}