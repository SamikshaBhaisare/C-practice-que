#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    int (*ptr)(int,int);
    ptr=add;
    printf("Enter 1st num a:");
    scanf("%d",&a);
    printf("Enter 2st num b:");
    scanf("%d",&b);
    printf("%d",ptr(a,b));
    return 0;
}