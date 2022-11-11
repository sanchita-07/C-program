#include <stdio.h>
int large(int a, int b){
    if(a>b)
    printf("%d is the largest.",a);
    else if (b>a)
    printf("%d is the largest.",b);
    else
    printf("Both are same.");
}
int main()
{
    int a , b, num;
    printf("Enter two no. : ");
    scanf("%d %d",&a,&b);
    num = large(a,b);
    return num;
}