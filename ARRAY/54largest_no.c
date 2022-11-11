#include <stdio.h>

void main()
{
    int i,n;
    float a[10];
    printf("Enter no. of elements within 10 :\n");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("%d. Enter no. : ",i+1);
        scanf("%f",&a[i]);
    }
    for(i=1; i<n; i++){
    if(a[0]<a[i]){
        a[0] = a[i];
        }
    }
    printf("The largest no. is %.3f",a[0]);
}