#include <stdio.h>
    void main()
    {
        int i,n,r,sum=0;
        printf("Enter a no. :");
        scanf("%d",&n);
        for(i=n;i>0; )
        {
            r = i%10;
            sum = sum*10 + r;
            i = i/10;  
        } 
           if(sum==n)
             printf("%d is a Palindrome no.",n);
             else
             printf("%d is not a Palindrome no.",n);
    }