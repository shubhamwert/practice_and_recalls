// Mike wants to go fishing this weekend to nearby lake. His neighbour Alice (is the one Mike was hoping to ask out since long time) is also planing to go to the same spot for fishing this weekend. The probability that it will rain this weekend is pr
//. There are two possible ways to reach the fishing spot (bus or train). The probability that Mike will take the bus is  pm and that Alice will take the bus is pa . Travel plans of both are independent of each other and rain.

// What is the probability  that Mike and Alice meet each other only (should not meet in bus or train) in a romantic setup (on a lake in rain)?

// Input constraints

// , , 

// Input format

// FIrst line: pa

// Second line: pm

// Third line: pr

// Output format
//prs

// , rounded up to six decimal places.






#include <stdio.h>

int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);// Writing output to STDOUT
    float p=a*(1-b)*c+b*(1-a)*c;
    
    printf("%f",p);
    
}


