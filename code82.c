#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("Before swapping:\n");
    printf("a:%d\n",a);
     printf("b:%d\n",b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping:\n");
     printf("a:%d\n",a);
     printf("b:%d\n",b);
     return 0;
     
}