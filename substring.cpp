#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    cout<<s.substr(n/2);
}