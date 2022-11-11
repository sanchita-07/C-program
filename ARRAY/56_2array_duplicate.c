#include <stdio.h>

int main()
{
    int a[100],n,flag=0;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(a[i]==a[j] && i!=j){
                flag++;
                printf("\nThe no. %d is found at location %d and %d",a[i],j,i);
            }
        }
    }
    if(flag==0)
    printf("\nNo duplicate no.");
    else
    printf("\nDuplicate no. found");
    return 0;
}