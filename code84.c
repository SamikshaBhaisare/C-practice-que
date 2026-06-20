#include<stdio.h>
int main(){
    int num,reverse=0;
    printf("enter num:");
    scanf("%d",&num);
    for(int i=0;i<8;i++){
        reverse=reverse<<1;
        reverse=reverse|(num&1);
        num=num>>1;
    }
    printf("%d",reverse);
    return 0;
}