#include<stdio.h>
int main(){
    volatile int flag=0;
    while(flag==0){
        printf("wait\n");
        flag++;
    }
    printf("flag changed");
    return 0;
}