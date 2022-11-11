#include <stdio.h>
float area(int r){
    float area = 3.14 * r * r;
    return area;
}
void main()
{
    int r;
    printf("Enter the radius of the circle : ");
    scanf("%d",&r);
    printf("%f",area(r));
}