#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("enter numbers:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    printf("number are:\n");
    for(int i=0;i<5;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}