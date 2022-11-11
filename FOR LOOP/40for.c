    #include <stdio.h>
    void main()
    {
        float i,n,sum=0;
        printf("Enter no. of terms :");
        scanf("%f",&n);
        for(i=0;i<=n;i++)
        {
            sum = sum + i/(i+1);  
        }
             printf("Sum = %f\n",sum);
    }