#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
//     string s;
//     cin>>s;
//     // int n=s.size();
//     int maxcount=0;
  
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//           int count=1;
//         for(int j=i+1;j<s.size();j++){
//             if(s[j]==s[i]){
//                 count++;
//             }
           
//         }
//         if(count>maxcount){
//                 maxcount=count;
//             }
//     }
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//           int count=1;
//         for(int j=i+1;j<s.size();j++){
//             if(s[j]==s[i]){
//                 count++;
//             }
           
//         }
//         if(count==maxcount){
//             cout<<ch<<" "<<maxcount<<endl;
//         }
     
//             // cout<<maxcount;
// }
       string s;
       cin>>s;
       vector<int> arr(26,0);
       for(int i=0;i<s.size();i++){
        char ch =s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;

       }
       int mx=0;
       for(int i=0;i<26;i++){
        if(arr[i]>mx) mx=arr[i];
       }
       for(int i=0;i<26;i++){
        if(arr[i]==mx){
             int ascii=i+97;
             char ch=(int)ascii;
             cout<<ch<<" "<<mx<<endl;
        }
       }

}