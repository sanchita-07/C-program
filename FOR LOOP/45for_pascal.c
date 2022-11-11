#include<stdio.h>
    void main()
    {
        int i,j,k,n,m=1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(k=1;k<=n-i;k++)
            {
            printf("  ");
            }
        for(j=0;j<=i;j++)
        {
        
           if(i==0 || j==0)
             m = 1;
             else
             m = m*(i-j+1)/j;
              printf("%4d",m);
        }
         printf("\n");
  
        }
    }