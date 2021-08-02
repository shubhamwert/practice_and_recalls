#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        map<int,int> mymap;

        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mymap[num]++;
        }




        t--;
    }


    return 0;
}