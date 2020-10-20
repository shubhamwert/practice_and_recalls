#include<iostream>
#include<bits/stdc++.h> 
#include <cstdlib>
int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}
using namespace std;
int main(){
    int n;

    cin>>n;
    int a[n];
    int target;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	qsort(a,n,sizeof(int),compare);

    cin>>target;

    int h=n;
    int l=0;

    while(h>l){
        int mid=(h+l)/2;
        if(a[mid]==target){
            cout<<"Yes";
            return 0;
        }
        else{
            if(a[mid]>target){
                l=mid;
            }
            else
            {
                h=mid;
            }
            
        }}
    cout<<"No";
    return 0;
}