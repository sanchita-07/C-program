#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20], s2[20];
    printf("Enter 1 : ");
    gets(s1);
    printf("Enter 2 : ");
    gets(s2);    
    puts(strcat(s1,s2));
}