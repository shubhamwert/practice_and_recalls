// You are provided an array  of size  that contains non-negative integers. Your task is to determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by

// .

// Note: View the sample explanation section for more clarification.

// Input format

//     First line: A single integer 

//  denoting the size of array 
// Second line: 
//  space-separated integers.
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    
    // int num=0;
    // for(int i=0;i<n;i++){
    //     num=num+(pow(10,i)*(a[i]%10));
    // }
    // cout<<num<<endl;
    // if(num%10==0){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }
    for (int i = 0; i < n; i++)
    {   cin>>a;
        if(i==9){
            if(a%10==0){
                cout<<"YES";
            }else
            {
                cout<<"NO";
            }
            
        }
    }
    


    return 0;
}

