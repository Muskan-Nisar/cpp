#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string twosumproblem(int n,vector<int> &books,int target){
 sort(books.begin(),books.end());
//  int n=books.size();
 int left=0;
 int right=n-1;
 while(left<right){
    int sum=books[left]+books[right];
    if(sum==target) return "YES";
    if(sum<target) left++;
    else right--;

 }
 return "NO";
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int> books;
    cout<<"enter the elemenets of the book:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        books.push_back(q);
    }
    int target;
    cout<<"enter the traget:";
    cin>>target;
 string ans=twosumproblem(n,books,target);
    cout<<ans;
}