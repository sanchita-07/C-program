#include <stdio.h>

void main()
{
    int m[10][10],t[10][10],r,c;
    printf("Enter the rows and columns of matrix : ");
    scanf("%d %d",&r,&c);  
    printf("Enter the elements of the matrix :\n");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            t[j][i] = m[i][j];
        }
    }
      printf("The original matrix is : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix is : \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d  ",t[i][j]);
        }
        printf("\n");
    }
}
