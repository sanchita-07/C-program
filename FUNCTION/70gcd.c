#include <stdio.h>
int gcd(int a, int b){
    if(a!=0){
        return gcd(a,a%b);
    }
    else
    return a; 
}
int main()
{
    int a,b;
    
    return 0;
}