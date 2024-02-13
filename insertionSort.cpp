#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
       int j=i;
       while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
       }
    }
    }
    int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   Insertion_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}