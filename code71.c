#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
   
    ptr=(int *)calloc(5,sizeof(int));
    printf("enter number:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    int max=ptr[0];
    for(int i=1;i<5;i++){
        if(max<ptr[i]){
            max=ptr[i];
        }
       
    }
     printf("%d",max);
free(ptr);
return 0;
}