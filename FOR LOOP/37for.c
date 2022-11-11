#include<stdio.h>
    void main()
    {
        int n,sum = 0, m;
        printf("Enter a no.\n");
        for(scanf("%d",&n);n!=0;n=n/10)
        {
            m = n % 10;
            sum = sum + m;
        }
        printf("Sum of digits of a no. = %d",sum);
        }