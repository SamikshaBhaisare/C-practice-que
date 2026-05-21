#include<stdio.h>
int main(){
    int num;
    printf("Enter value of num:");
    scanf("%d",&num);
    int count=0;
    while(num>0){
        if(num&1){
            count++;
        }
       num=num>>1;
    }
     printf("%d",count);
    return 0;
}