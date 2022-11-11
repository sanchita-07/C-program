#include <stdio.h>

void main()
{
    int n,a[n];
    printf("Enter size of the array : \n");
    scanf("%d",&n);
    for(int i=0; i <n; i++){
        printf("Enter a no.: ");
        scanf("%d",&a[i]);
    }
    printf("Values in array : \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}