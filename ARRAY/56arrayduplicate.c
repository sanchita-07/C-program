#include <stdio.h>

void main()
{
    int a[100], b[100], i, j, n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements of the array : ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
     for(i=0; i<n; i++){
        if(b[i]!=-1){
            int count = 1;
            int s = b[i];
            for(j=i+1; j<n; j++){
                if(s==b[j]){
                    count+=1;
                    b[j]=-1;
                }
            }
            printf("%d occurs %d times",s,count);
        }
    }
}