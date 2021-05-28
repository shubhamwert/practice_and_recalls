#include<iostream>
// #include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    if(s.length()!=t.length()){
        cout<<"NO";
        return 0;
    }
    int size=s.length();
    for(int i=0;i<size;i++){
        if(s[i]!=t[size-i-1]){
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
    return 0;
}