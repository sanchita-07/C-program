#include <stdio.h>
    void main()
    {
        int i,j,n=1,row;
        printf("Enter no. of rows :");
        scanf("%d",&row);
        for(i=1;i<=row;i++)
        {
              for(j=1;j<=i;++j){
            printf("%d ",n);
            ++n;
              }
              printf("\n");
        }
           
    }