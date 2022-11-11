#include <stdio.h>
    void main()
    {
        float i,n,sum=0;
        printf("Enter a no. :");
        scanf("%f",&n);
        for(i=1;i<=n;i++)
        {
            sum = sum + 1/(i*i);  
        }
             printf("Sum = %f\n",sum);
    }