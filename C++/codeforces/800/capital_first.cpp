#include<iostream>
    using namespace std;
     
    int main(){
        string s;
        cin>>s;
        if(s[0]>91)
            s[0]=s[0]-97+65;
        // s[0]=char(s[0]);
        cout<<s;
        return 0;
        
    }