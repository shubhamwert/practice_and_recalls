// Rahul is a very busy persion he dont wan't to waste his time . He keeps account of duration of each and every work. Now he don't even get time to calculate duration of works, So your job is to count the durations for each work and give it to rahul.

 

// Input:

// First line will be given by N number of works
// Next N line will be given SH,SM,EH and EM  each separated by space(SH=starting hr, SM=starting min, EH=ending hr, EM=ending min)
// Output:

// N lines with duration HH MM(hours and minutes separated by space)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n>0)
    {   int SH,SM,EH,EM;
        cin>>SH>>SM>>EH>>EM;
        if(SH<EH){
            cout<<EH-SH<<" ";
            if(SM<=EM){
                cout<<SM-EM<<endl;
            }else{
                cout<<SM-EM+60;
            }
            continue;
        }
        else if(SH>EH){
            cout<<SH-EH+12<<" ";
            if(SM<=EM){
                cout<<SM-EM<<endl;
            }else{
                cout<<SM-EM+60;
            }
            continue;
        }
        else if(SH==EH)
        { if(EM>=SM)
            cout<<"0 "<<EM-SM<<endl;
          else if(EM<=SM){
            cout<<"12 "<<EM-SM<<endl;

          }  
          continue;

        }
        




    n--;    }
    
    return 0;
}