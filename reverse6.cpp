#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    reverse(s.begin()+2,s.begin()+6);
    cout<<s;

}