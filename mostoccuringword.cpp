#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> str;
    string temp;
    while(ss>>temp){
        str.push_back(temp);
    }
    sort(str.begin(),str.end());
    int maxcount=1;
    int count=1;
    for(int i=0;i<str.size();i++){
       if(str[i]==str[i-1]) count++;
       else count=1;
       maxcount=max(maxcount,count);
    }
    count=1;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1]) count++;
        else count=1;
        if(maxcount==count){
            cout<<str[i]<<" "<<maxcount<<endl;

        }
    }
}