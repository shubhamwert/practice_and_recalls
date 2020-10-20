#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout<<"    "<<endl<<endl;
    int x=0,y=0,c=5;
    int num=0;
    while(num != 1){
        cin>>num;
        if(x!=c){
            x++;
        }
        else{

            y++;
            x=0;

        }
        cout<<num;
    }
    cout<<x<<" "<<y<<endl;
    cout<<abs(3-x)+abs(3-y);
    return 0;
    }