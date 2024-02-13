#include<iostream>
using namespace std;
void  selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]) 
            {mini=j;}
        }
        int temp =arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}