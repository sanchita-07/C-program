#include <stdio.h>

void main()
{
    int arr[100],i,n,j,a;
    printf("Enter the no. of elements :");
    scanf("%d",&n);
    printf("Enter no. :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
    printf("ascending \n");
    for(i=0; i<n; i++)
    printf("%d\n",arr[i]);
    
}