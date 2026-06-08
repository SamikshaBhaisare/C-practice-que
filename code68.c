#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(sizeof(int));
    printf("enter a num:");
    scanf("%d",ptr);
    printf("%d",*ptr);
    free(ptr);
    return 0;
}