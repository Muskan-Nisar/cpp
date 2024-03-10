#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string longestcommonprefix(vector<string> &str){
    sort(str.begin(),str.end());
   
    string str1=str[0];
     int i=0;
    string str2=str[str.size()-1];
    int j=0;
     string ans=" ";
     while(i<str1.size() && j<str2.size()){
        if(str1[i]==str2[j]){
            ans=ans+str1[i];
            i++;
            j++;
        }
        else{
            break;
        }
     }
     return ans;

}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<string> str(n);
    cout<<"enter the strings:";
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<" the losngest common prefix is : "<< longestcommonprefix(str);

}
