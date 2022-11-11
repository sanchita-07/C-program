#include <stdio.h>

int main()
{
    int a[50] = {1,2,3,4,5,6};
    int i = 7;
    a[6] = 7;
    for(int k =0; k<=6; k++)
    printf("%d ",a[k]);
    return 0;
}