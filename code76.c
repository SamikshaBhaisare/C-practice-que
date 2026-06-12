#include<stdio.h>
#define CUBE(x) ((x)*(x)*(x))
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    
    printf("%d",CUBE(n));
    return 0;

}