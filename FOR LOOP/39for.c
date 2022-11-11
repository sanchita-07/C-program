#include <stdio.h>
    void main()
    {
        float i,n,sum=0;
        printf("Enter no. of terms :");
        scanf("%f",&n);
        for(i=1;i<=n;i++)
        {
            sum = sum + 1/i;  
        }
             printf("Sum = %f\n",sum);
    }