#include <stdio.h>

void main()
{
    int A[10][10],B[10][10],s[10][10],d[10][10],r,c;
    printf("Enter the rows and columns of matrix : ");
    scanf("%d %d",&r,&c);  
    printf("Enter the elements of the matrix A :\n");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("A%d%d : ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of the matrix B :\n");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("B%d%d : ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    printf("The sum of matrix A and B is : \n");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            s[i][j] = A[i][j] + B[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
       }

    printf("The difference of matrix A and B is : \n");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            d[i][j] = A[i][j] - B[i][j];
            printf("%d ",d[i][j]);
        }
        printf("\n");
       }
}
