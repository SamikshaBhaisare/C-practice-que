#include<stdio.h>

#define MAX(a,b) ((a)>(b) ? (a):(b))
int main(){
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("%d",MAX(a,b));
    return 0;

}