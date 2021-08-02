#include<stdio.h>


int main(){
    int i=1,j=1;
    for(;;)
    {
        if (i>5)
            break;
        else{
            i+=1;
        }
        printf("%d\n",j);
        i+=j;
        j=j+7;
    }
    return 0;



}