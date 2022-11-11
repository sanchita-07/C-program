#include <stdio.h>
int factorial(int n){
    int fac=1;
    for(int i=1; i<=n; i++)
    fac = fac * i ;
    return fac;
}
void main()
{
    int i;
    printf("Enter a no. : ");
    scanf("%d",&i);
    printf("%d",factorial(i));
}