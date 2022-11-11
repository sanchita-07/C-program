#include <stdio.h>

void main()
{
    int a[10] = {1,3,5,7};
    int b[10] = {2,4,6,8,10};
    int c[10],i=0, j=0, k=0;
    while(i<4 && j<5){
        if(a[i]<b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i<4)
    c[k++] = a[i++];
    while(j<5)
    c[k++] = b[j++];
    for(k=0; k<9; k++)
        printf("%d",c[k]);
}