#include <stdio.h>
int fib(int n);
void main()
{
    int a;
    scanf("%d",&a);
    printf("%d \n",fib(a));
}

int fib(int n){
    if(n==1)
    return 1;
    int a = fib(n-1);
    int b = fib(n-2);
    int c = a + b;
    return c; 
}