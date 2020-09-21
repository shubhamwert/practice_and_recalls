#include<iostream>

using namespace std;

int main(){
    int n;

    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++){
     cin>>a[i]; 
    }

    int max=0;
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(a[i]-a[j]>max){
            max=a[i]-a[0];
            j=i;
        }
        
        }


    }






    return 0;
}