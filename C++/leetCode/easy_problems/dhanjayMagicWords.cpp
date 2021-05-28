// Dhananjay has recently learned about ASCII values.He is very fond of experimenting. With his knowledge of ASCII values and character he has developed a special word and named it Dhananjay's Magical word.

// A word which consist of alphabets whose ASCII values is a prime number is an Dhananjay's Magical word. An alphabet is Dhananjay's Magical alphabet if its ASCII value is prime.

// Dhananjay's nature is to boast about the things he know or have learnt about. So just to defame his friends he gives few string to his friends and ask them to convert it to Dhananjay's Magical word. None of his friends would like to get insulted. Help them to convert the given strings to Dhananjay's Magical Word.

// Rules for converting:

// 1.Each character should be replaced by the nearest Dhananjay's Magical alphabet.

// 2.If the character is equidistant with 2 Magical alphabets. The one with lower ASCII value will be considered as its replacement.

// Input format:

// First line of input contains an integer T number of test cases. Each test case contains an integer N (denoting the length of the string) and a string S.

// Output Format:

// For each test case, print Dhananjay's Magical Word in a new line.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
        cin>>n;

    while(n>0){
        int p;
        cin>>p;
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]>=65&&s[i]<=69){
                cout<<"C";
            }else if (s[i]>69&&s[i]<=72)
            {
                cout<<"G";
            }else if (s[i]>72&&s[i]<=76)
            {
                cout<<"I";

            }else if (s[i]>76&&s[i]<=81)
            {
                cout<<"O";

            }else if (s[i]>81&&s[i]<=85)
            {
                cout<<"S";
            }
            
            else if (s[i]>85&&s[i]<=90)
            {
                cout<<"Y";
            }else if(s[i]>=97&&s[i]<=99){
                cout<<"a";
            }else if (s[i]>99&&s[i]<=102)
            {
                cout<<"e";
            }else if (s[i]>102&&s[i]<=105)
            {
                cout<<"g";

            }else if (s[i]>105&&s[i]<=108)
            {
                cout<<"k";

            }else if (s[i]>108&&s[i]<=111)
            {
                cout<<"m";
            }
            
            else if (s[i]>111&&s[i]<=122)
            {
                cout<<"l";
            }
            
            

            
            
        }
        

        n--;
    }


    return 0;
}