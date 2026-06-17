#include<stdio.h>
int main(){
    int num;
    int position=0;
    printf("enter num:");
    scanf("%d",&num);
    while(num>0){
        if(num&1){
            printf("%d",position);
            break;
        }
        num=num>>1;
        position++;
    }
    return 0;
}