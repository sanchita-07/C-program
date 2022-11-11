#include <stdio.h>

void main()
{
    int n,i,a[10];
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter the no. to store in array :\n");
    for(i=0;i<n;i++){
        printf("Element no. %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("The value stored in the array are : \n");
    for(i=0;i<n;i++){
        printf("%4d",a[i]);
    }
}