// Ankit is in maze. The command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). String contains L, R, U, D denoting left, right, up and down. In each command he will traverse 1 unit distance in the respective direction.

// maze

// For example if he is at (2, 0) and the command is L he will go to (1, 0).

// Input:

// Input contains a single string.

// Output:

// Print the final point where he came out.

#include<iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ax=0;
    int ay=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='L'){
                ax++;
        }
        else
        {
            if(s[i]=='R'){
                ax--;
        }
        else{
            if(s[i]=='D'){
            ay++;
            
        }
        else{
              
            ay--;
        
        
        }
        }
        }
     }


    cout<<ax<<" "<<ay;

    return 0;

}