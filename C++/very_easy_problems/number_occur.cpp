#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Declare variables to store count of vowels
    int a = 0, e = 0, i = 0, o = 0, u = 0,q = 0, w = 0, r = 0, t = 0, y = 0;
    string s;
    // Read given string from STDIN
    cin >> s;

    int s_len = s.length();
    // Iterate over each character in the string
    for(int j=0; j<s_len; j++) {

        // This can be done in a better way using hashing, which simplifies the implementation,
        // however for the purpose of this article we'll restrict the implementation to naive way

        // Check for each character in if else
        if(s[j] == '1') {
            a++;
        } else if(s[j] == '2') {
            e++;
        } else if(s[j] == '3') {
            i++;
        } else if(s[j] == '4') {
            o++;
        } else if(s[j] == '5') {
            u++;
        }
        else if(s[j] == '6') {
            q++;
        } else if(s[j] == '7') {
            w++;
        } else if(s[j] == '8') {
            r++;
        } else if(s[j] == '9') {
            t++;
        } else if(s[j] == '0') {
            y++;
        }
    }
    // Print out the result to STDOUT
    cout << "0 " << y << endl;
    cout << "1 " << a << endl;
    cout << "2 " << e << endl;
    cout << "3 " << i << endl;
    cout << "4 " << o << endl;
    cout << "5 " << u << endl;
    cout << "6 " << q << endl;
    cout << "7 " << w << endl;
    cout << "8 " << r << endl;
    cout << "9 " << t << endl;
    return 0;
}