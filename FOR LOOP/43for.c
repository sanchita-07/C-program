#include <stdio.h>
    void main()
    {
        int i,n,sum=0;
        printf("Enter a no. :");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum = sum + (i*(i+1))/2;  
        }
             printf("Sum = %d\n",sum);
    }