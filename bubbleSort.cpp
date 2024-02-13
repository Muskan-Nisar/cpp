#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i++){
        int count=0;
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count =1;

            }
        }
        if(count==0){
            cout<<"sorted"<<endl;
            break;
            
        }
        cout<<"runs"<<endl;
    }
}
int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}