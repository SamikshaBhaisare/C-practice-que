#include<stdio.h>
void swapfunction(int *a,int *b);
int main(){
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
     int b;
    printf("enter value of b:");
    scanf("%d",&b);
    swapfunction(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void swapfunction(int  *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
}