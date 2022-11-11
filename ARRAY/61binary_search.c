#include <stdio.h>

void main()
{
    int a[50],n, num,mid=0,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : \n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&num);
    int s = 0;
    int e = n;
    while(s<=e){
     mid=(s+e)/2;
        if(a[mid]==num){
        printf("The element is found at index %d ",mid);
        break;
        }
        else if(a[mid]<num)
        s = mid + 1;
        else
        e = mid - 1;
    }
    if(s>e)
    printf("Element is not found.");
}