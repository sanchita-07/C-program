#include <stdio.h>
#include <string.h>
struct student {
    char name[20];
    char branch[10];
    float regd;
};
void detail(struct student s);
void main(){
    struct student s = {"Sanchita","IT", 2111100619};
    detail(s);
}

void detail(struct student s){
    printf("Name : %s \n",s.name);
    printf("Branch : %s \n",s.branch);
    printf("regd : %0.0f \n",s.regd);
}