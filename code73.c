#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("enter 5 number:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    float avg;
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+ptr[i];
      
    }
      avg=sum/5.0;
    printf("avg is:%f\n",avg);
    free(ptr);
    return 0;
}