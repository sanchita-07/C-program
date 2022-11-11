    #include<stdio.h>
    void main()
    {
        int i;
        i = 10;
        do
        {
            printf("%d",i+1);
            i-=1;
        } while (i != 0);
    }