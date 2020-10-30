#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int r=n-1;
    int l=0;
    list<int> v;
    int a[n];
    int counter=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    v.push_back(a[n-1]);
    while(l<r){
            if(!(counter%2==0)){
                r--;
                v.push_back(a[r]);
                r--;
                v.push_front(a[r]);
            }
            else{
                v.push_front(a[l]);
                l++;
                v.push_back(a[l]);
                l++;
            }
            counter++;


    }
    cout<<counter<<endl;
    for (auto it = v.begin(); it != v.end(); ++it) 
        cout <<*it<<" "; 
    return 0;

}