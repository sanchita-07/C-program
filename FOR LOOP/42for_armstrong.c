#include <stdio.h>
    void main()
    {
        float i,r,sum=0;
        int n;
        printf("Enter a no. :  \n");
        scanf("%d",&n);
        for(i=n;n!=0;n=n/10)
        {
           r = n % 10;
            sum = sum + (r*r*r);  
        }
           if(sum==i)
             printf("%0.0f is an Armstrong no.",i);
             else
             printf("%0.0f is not an Armstrong no.",i);

    }