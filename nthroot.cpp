#include<iostream>
using namespace std;
// Return 1 if ==m
// retrun 0 id <m;'
// return 2 if<m
int fun(int n,int m,int mid){
    
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*mid;
        if(ans>m) return 2;}
        if(ans==m) return 1;
    return 0;

}
int Nthroot(int n,int m){
    int low=1;
    int high =m;
    while(low<=high){
        int mid=(low+high)/2;
        int midN=fun(n,m,mid);
        if(midN==1) {
        return mid;}
else if(midN==0) low =mid+1;
   else high =mid-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int nthroot=Nthroot(n,m);
    cout<<nthroot;
}