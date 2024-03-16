#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;
    for(int i=0;i<arr.size();i++){
        
                ans=ans^arr[i];
            }
          for(int i=0;i<arr.size();i++){
        
                ans=ans^i;
            }
    
    return ans;
  
	
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int ans=findDuplicate(arr);
    cout<<ans;
}
