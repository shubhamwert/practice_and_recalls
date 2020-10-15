#include<iostream>


using namespace std;


int main(){
int t;
cin>>t;
while(t>0){
    long int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m1=(a+b)/2;
    int m2=(b+c)/2;
    // long int sane=2;
    while(m1<=b && m2<=c)
    {   

        if(m1+m2>c){
        cout<< m1<<" "<<m2<<" "<<c<<endl;
        break;
                    }
    else{

        m1=(b+m1)/2;
        m2=(c+m2)/2;

        }
    // sane=2*sane;
    // if(sane>10000){
    //     cout<<endl<<m1<<"  "<<m2<<" "<<a<<"  "<<b<< "  " <<c<< "  "<<d<<"  "<<endl;
    // }
    }



    t--;
}




}