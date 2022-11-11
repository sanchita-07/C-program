#include <stdio.h>

void main()
{
    int A[10][10],B[10][10],m[10][10],r1,c1,r2,c2;
    printf("Enter the rows and columns of matrix A : ");
    scanf("%d %d",&r1,&c1);  
    printf("Enter the elements of the matrix A :\n");
    for(int i = 0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("A%d%d : ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix B : ");
    scanf("%d %d",&r2,&c2);  
    printf("Enter the elements of the matrix B :\n");
    for(int i = 0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("B%d%d : ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    printf("The multiplication of matrix A and B is : \n");
    for(int i = 0; i<r1; i++){
        for(int j=0; j<c2; j++)
            m[i][j] = 0;
       }
    if(c1==r2){
        for(int i=0; i<r1;i++){
            for(int j=0; j<c2; j++){
                for(int k=0; k<r2; k++)
                m[i][j] += A[i][k] * B[k][j];
            }
        }
       for(int i = 0; i<r1; i++){
        for(int j=0; j<c2; j++)
            printf("%d ",m[i][j]);
        printf("\n");
       }
    }
    else
    printf("Matrix multiplication can not be done.");     
}
