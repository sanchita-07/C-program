#include <stdio.h>
#include <math.h>

void main()
{
    float Y,n,x;
    printf("Enter the value of n and x respectively : \n");
    scanf("%f%f",&n,&x);
    if(n==1){
    Y = 1 + x;
    printf("The value of Y is %f",Y);
    }
    else if (n==2){
    Y = 1 + (x/n);
    printf("The value of Y is %f",Y);
    }
    else if (n==3){
    Y = 1 + pow(x,n);
    printf("The value of Y is %f",Y);
    }
    else if (n>3 || n<1){
    Y = 1 + n*x;
    printf("The value of Y is %0.2f",Y);
    }
    else{
    printf("Invalid No.");
    }
}