#include<iostream>
#include<cmath>
#include<cstring>
#include <bits/stdc++.h> 

using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n1,n2;
    n1=s1.length();
    n2=s2.length();
    int i=0,j=0;
    int count=0;
    for(;i<n1&&j<n2;){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            if(s1[i]>s2[j]){
                count++;
                j++;
            }
            else{
                count++;
                i++;
            }



        }


    }
    
    count=n1-i+n2-j+count;
    cout<<count;

    return 0;


 }