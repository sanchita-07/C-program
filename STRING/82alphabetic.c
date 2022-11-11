#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    printf("Enter the string : ");
    scanf("%s",s);
    char temp;
    int i,j;
    int n = strlen(s);
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
           if(s[i]>s[j]){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
           }
        }
    }
    printf("The string in alphabetic order is : %s ",s);
}