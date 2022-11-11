#include <stdio.h>

int main()
{
    struct num{
        int a,b;
    }s;
    printf("Enter two number : ");
    scanf("%d %d",&s.a,&s.b);
    if(s.a>s.b)
    printf("%d is greater than %d.",s.a,s.b);
    else if(s.b>s.a)
    printf("%d is greater than %d.",s.b,s.a);
    else
    printf("Both are same.");
    return 0;
}