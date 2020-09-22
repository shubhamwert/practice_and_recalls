// You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest.

// You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

// Use green-colored balloons for the first problem and purple-colored balloons for the second problem
// Use purple-colored balloons for the first problem and green-colored balloons for the second problem
// You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.


#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t!=0){
    int cr[2],n;
    cin>>cr[0]>>cr[1]>>n;
    
    // if(cr[1]>cr[0]){
    //     int temp=cr[1];
    //     cr[1]=cr[0];
    //     cr[0]=temp;
    // }
    sort(cr,cr+2);
    
    int ct[2]={0,0};
    for (int  i = 0; i < n; i++)
    {   int c1,c2;
        cin>>c1>>c2;
        ct[0]+=c1;
        ct[1]+=c2;

    }
    
    if(ct[1]>ct[0]){
        int temp=ct[1];
        ct[1]=ct[0];
        ct[0]=temp;
    }
    
    cout<<ct[0]*cr[0]+ct[1]*cr[1]<<endl;







    t--;
}



return 0;
}
