#include <stdio.h>
    void main()
    {
        int i,n,sum,min,max;
        printf("Enter two no. between whom perfect has to be calculated :  \n");
        scanf("%d%d",&min,&max);
        printf("Perfect no. between %d & %d are : \n",min,max);
        for(n=min;n<=max;n++)
        {
            i=1;
            sum = 0;
        while(i<n)
        {
           if(n%i==0)
            sum = sum + i;  
            i++;
        }
           if(sum==n)
             printf("%d\t",n);
        }

    }