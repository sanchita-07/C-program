#include <stdio.h>

int main()
{
        int a[50][50], stu=5, sub =3;

    for(int i=0;i<stu;i++){
        for(int j=0; j<sub; j++){
            printf("Enter the marks of student%d in subject %d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    return 0;
}