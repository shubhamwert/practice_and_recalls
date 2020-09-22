// Bob has an important meeting tomorrow and he has to reach office on time in morning. His general mode of transport is by car and on a regular day (no car trouble) the probability that he will reach on time is p1 . The probability that he might have car trouble is p2. If the car runs into trouble he will have to take a train and only 2 trains out of the available N trains will get him to office on time.

// What are the chances that he will reach office on time tomorrow?

#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double  p1,p2,N;
    cin>>p1>>p2>>N;
    
    
    
    cout<<setprecision(6)<<fixed<<(p2*(1-p1)+p1*(2/N));

    
    
    
    return 0;
}