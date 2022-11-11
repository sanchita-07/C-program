#include <stdio.h>

void main()
{
    int n;
    printf("the no. between 100-200 that are divisible by 3 but not by 4 are\n");
    for(n=100;n<200;n++){
    if(n%3==0 && n%4!=0)
    printf("%d\t");
    }
}