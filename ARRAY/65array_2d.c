#include <stdio.h>

int main()
{
    int a[50][50] = {{1,2},{3,4},{5,6}};
    for(int i=0;i<3;i++){
        for(int j=0; j<2; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}