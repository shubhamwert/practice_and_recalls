#include<iostream>

using namespace std;

int Watermelon(){

int n;
cin>>n;

if(n%2==0 && n!=2){
cout<<"Yes";

}
else{
    cout<<"No";
}
return 0;


}

void TooLongWord(){
    int n;
    cin>>n;
    string a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        int p=a[i].length();
        if(p>10){
            cout<<a[i][0]<<p-2<<a[i][p-1]<<endl;
        }
        else{
            cout<<a[i]<<endl;
        }
    }




}

void team(){
        int n;
        cin>>n;
        int counter=0;
        for(int i=0;i<n;i++){
            int a=0,temp;
            for(int j=3;j>0;j--){    
                cin>>temp;
                a=temp+a;
                }
            if(a>=2){
                counter++;
            }

        }
        cout<<counter;
}
//#NOT CLEAN
void kthplace(){

    int n,k;
    cin>>n>>k;
    
    n=n-k;
    int p=k;
    while(k>1){
        int empyt;
        cin>>empyt;
        cout<<k<<endl;
        if(empyt<=0){
            cout<<k<<"route1";
            return;
        }
        k--;
    }
    int num;
    cin>>num;

    int temp=-1;
    while(n!=0 && num==temp){
        cin>>temp;
        
        p++;
    }
    cout<<p;

}




int main(){
    kthplace();
    return 0;
}