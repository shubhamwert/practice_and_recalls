#include<iostream>
#include<string>
#include <algorithm>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.length()<26){
        cout<<"NO";
        return 0;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map <char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    if(m.size()!=26){
        cout<<"NO";
        return 0 ;
    }

    cout<<"YES";
    return 0;
}