#include<stdio.h>
int main(){
    int n,P1;
    printf("Enter value of P1:");
    scanf("%d",&P1);
    printf("Enter value of n:");
    scanf("%d",&n);
    P1=P1^(1<<n);
    printf("Toggle bit is:%d",P1);
    return 0;
}