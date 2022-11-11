#include<stdio.h>
    void main()
    {
        int i,j,k;
         
        for(i=2;i<=8;i=i+2)
        {
        for(k=8;k>=i;k=k-2)
            {
            printf("  ");
            }
        for(j=1;j<=i;j=j+1)
        {
        printf("%d",j);
        }
         printf("\n");   
        }
    }