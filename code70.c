#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int sum=0;
    ptr=(int *)malloc(5*sizeof(int));
    printf("enter number:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+ptr[i];

    }
    printf("Sum is:%d\n",sum);
    free(ptr);
    return 0;
}