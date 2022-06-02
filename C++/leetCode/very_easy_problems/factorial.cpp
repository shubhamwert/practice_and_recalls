// You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. You can read more about the factorial of a number here.

// Input Format:
// The first and only line of the input contains a single integer N denoting the number whose factorial you need to find.

// Output Format
// Output a single line denoting the factorial of the number N.




#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double  p1,p2,N;
    cin>>p1>>p2>>N;
    
    
    
    cout<<setprecision(6)<<fixed<<(p2*(1-p1)+p1*(2/N));

    
    
    
    return 0;
}