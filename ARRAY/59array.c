#include <stdio.h>
 
void main()
{
    int i, x, pos, size, n;
    int a[6] = {23, 54, 32, 47, 12, 34};
     for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    x = 50;
    pos = 5;
    n++;
    for (i = n-1; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = x;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}