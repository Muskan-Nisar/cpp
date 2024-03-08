#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    cout<<s<<endl;
    
    reverse(s.begin(),s.begin()+n/2);

    cout<<s;
}