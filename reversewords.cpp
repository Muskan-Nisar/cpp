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
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
    cout<<str[i]<<" ";}
    }