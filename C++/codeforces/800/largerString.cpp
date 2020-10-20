#include<iostream>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    int c=0;
    int i=0;
    for(;i<s1.length() || i<s2.length();i++)
    {   s1[i]=tolower(s1[i]);
      s2[i]=tolower(s2[i]);

        c=s1[i]-s2[i];
        if(c==0){
            continue;
        }
        else
        {
            if(c>0){
                c=1;
                break;
            }
            else{
                c=-1;
                break;
            }
        }
        
    }
    if(i>s1.length()){
        c=-1;
    }
    if(i>s2.length()){
        c=1;
    }

    cout<<c;

    return 0;
}