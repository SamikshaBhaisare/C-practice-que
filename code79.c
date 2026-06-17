#include<stdio.h>
int main(){
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if(num>0 && (num&(num-1))==0){
        printf("power of 2");
    }else{
        printf("not power of 2");
    }
    return 0;
}