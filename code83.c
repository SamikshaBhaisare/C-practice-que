#include<stdio.h>
int main(){
    int num;
    int pos;
    printf("enter num:");
    scanf("%d",&num);
     printf("enter pos:");
    scanf("%d",&pos);
    if(num &(1<<pos)){
        printf("bit is set");

    }else{
          printf("bit is not set");
    }
    return 0;
}