#include <stdio.h>

void main()
{
    int n,i;
    float a[10],sum,avg;
    printf("Enter the no. of elements within 10 : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("%d. Enter number : ",i+1);
    scanf("%f",&a[i]);
    sum = sum + a[i];
}
avg = sum/n;
printf("Average = %0.2f",avg);
}