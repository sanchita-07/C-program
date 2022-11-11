#include <stdio.h>
    void main()
    {
        int i,n;
        int n1 = 0,n2 = 1,n3;
        printf("Enter no. of terms : \n");
        scanf("%d",&n);
        printf("Fibonacci = %d %d",n1,n2);
        for(i=2;i<n;i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
           
            printf(" %d ",n3);
        }
          
    }