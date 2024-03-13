#include<iostream>
#include<vector>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    vector<int> result;
    while(i<n && j<m){
        if(a[i]<=b[j])
        {
            if(result.size()==0 || result.back()!=a[i]){
                result.push_back(a[i]);
            }
            i++;
        }
        else{
             if(result.size()==0 || result.back()!=b[j]){
                result.push_back(b[j]);
            }
            j++;

        }
    }
    while(i<n){
         if(result.size()==0 || result.back()!=a[i]){
                result.push_back(a[i]);
            }
            i++;
    }
    while(j<m){
         if(result.size()==0 || result.back()!=b[j]){
                result.push_back(b[j]);
            }
            j++;


    }
    return result;

}
int main(){
    int n;
    cout<<"enter the size of n:";
    cin>>n;
    vector<int> a;
     cout<<"enter the elements of n:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        a.push_back(q);

    }
    int m;
        cout<<"enter the size of m:";
    cin>>m;
    vector<int> b;
     cout<<"enter the elements of m:";
    for(int i=0;i<m;i++){
     int q;
     cin>>q;
     b.push_back(q);
    }
   vector<int> result = sortedArray(a, b);

    cout << "Merged and sorted array without duplicates: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}