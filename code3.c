#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    if(num&1){
        printf("odd\n");
    }
    else{
        printf("even\n");
    }
    return 0;
}