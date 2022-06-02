// You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

// Input Format
// The first and only line of input contains 3 space separated integers l, r and k.

// Output Format
// Print the required answer on a single line.
#include<iostream>

using namespace std;

int main(){
    int l,r,k;
    cin>>l>>r>>k;
    int n1=l/k;
    int n2=r/k;
    if(l!=r){
    cout<<n2-n1+1;
    }
    else{
        cout<<0;
    }



}