// Patlu and Motu works in a building construction, they have to put some number of bricks N from one place to another, and started doing their work. They decided , they end up with a fun challenge who will put the last brick.

// They to follow a simple rule, In the i'th round, Patlu puts i bricks whereas Motu puts ix2 bricks.

// There are only N bricks, you need to help find the challenge result to find who put the last brick.

// Input:

// First line contains an integer N.

// Output:

// Output "Patlu" (without the quotes) if Patlu puts the last bricks ,"Motu"(without the quotes) otherwerwise
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s="Motu";
    int i=1;
    while(true)
    {
        s="Patlu";
        n=n-i;
        if(n<=0){
            break;
        }
        else
        {
            s="Motu";
            n=n-2*i;
            if(n<=0){
            break;
        }
        else
        {
            continue;
        }
        

        }
        





    }
    








    return 0;
}
