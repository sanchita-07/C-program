#include <stdio.h>
#include <string.h>
void main()
{
    char string[50][50];
    int n;
    printf("Enter no. of strings : ");
    scanf("%d",&n);
    printf("Enter the strings : \n");
    for(int i=0; i<n; i++){
        scanf("%s",string[i]);
    }
    printf("The entered strings and their lengths are : \n");
    for(int i=0; i<n; i++){
    printf("%s\n",string[i]);
    printf("%d\n",strlen(string[i]));
    }
}