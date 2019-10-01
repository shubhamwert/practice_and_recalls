// Given two strings of equal length, you have to tell whether they both strings are identical.

// Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

// Input :

// First line, contains an intger 'T' denoting no. of test cases.
// Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.
// Output:

// For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.

#include <bits/stdc++.h> 
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if((s1.compare(s2)) == 0) 
            cout << "YES" << endl; 
        else
        cout << "NO"<<endl;





    }
    
    
    
    
    
    
    
    
    return 0;
    }