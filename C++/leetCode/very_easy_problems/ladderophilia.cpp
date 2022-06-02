// Aditya is fond of ladders. Everyday he goes through pictures of ladders online but unfortunately today he ran out of ladder pictures online. Write a program to print “ladder with N steps”, which he can use to get his daily dose of ladder love.

// INPUT:
// Input contains integer N, the number of steps in the ladder

// OUTPUT:

// Print the ladder with the gap between two side rails being 3 spaces(“   “).

// Check the sample output for format of printing the ladder.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s="*   *\n*   *\n*****\n";
    for (int i = 0; i < n; i++)
    {
        cout<<s;
    }
    cout<<"*   *\n*   *\n";



    return 0;

}