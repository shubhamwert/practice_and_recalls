// This time your task is simple.

// Given two integers X and K, find the largest number that can be formed by changing digits at atmost K places in the number X.

// Input:

// First line of the input contains two integers X and K separated by a single space.

// Output:

// Print the largest number formed in a single line.



#include <iostream>
#include<string>

using namespace std;

int main() {
	string X;
	int K=0;
	cin >> X;
	cin >> K;
    for(int i=0;i<K && i<X.length();i++){
        while(X[i]=='9'){
            i++;
            K++;
        }
        X[i]='9';
    }
    
    cout<<X<<endl;
}

