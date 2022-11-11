#include <stdio.h>
int add(int a, int b){
    int c = a + b;
    return c;
}
void main()
{
    int a,b;
    printf("Enter two no. : \n");
    scanf("%d %d",&a,&b);
    printf("%d",add(a,b));
}