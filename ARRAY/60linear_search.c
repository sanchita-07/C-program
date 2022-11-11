#include <stdio.h>

int main()
{
    int a[50],num,s,i;
    printf("Enter size of the array : ");
    scanf("%d",&s);
    printf("Enter elements of the array : \n");
    for(i=0; i<s; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the no. to be found out : ");
    scanf("%d",&num);
    for(i=0; i<s; i++){
        if(a[i]==num){
        printf("%d is present in the array at index %d.",num,i);
        break;
        }
    }
    if(i==s){
        printf("Element is not found.");
    }
    return 0;
}