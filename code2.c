#include<stdio.h>
int sum(int a,int b){
    int sum=a+b;
    printf("sum is: %d\n",sum);
    return 0;

}
int div(int a,int b){
    int div=a/b;
    printf("div is: %d\n",div);
    return 0;

}
int sub(int a,int b){
    int sub=a-b;
    printf("sub is: %d\n",sub);
    return 0;

}
int mul(int a,int b){
    int mul=a*b;
    printf("mul is: %d\n",mul);
    return 0;

}
int main(){
int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("enter the value of b:");
    scanf("%d",&b);
    sum(a,b);
    div(a,b);
    sub(a,b);
    mul(a,b);

}