#include <stdio.h>

void main()
{
    int a[100],b[100],n,i,j=0,flag=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements of the array : ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[j] = a[i];
        j++;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(b[j]==b[i]){
                flag++;
                break;
            }
        }
    }
    if(flag!=0)
    printf("Duplicate no. exist.");
    else
    printf("Duplicate no. does not exist.");
}