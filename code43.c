#include<stdio.h>
int maximum(int a,int b);
int main(){
    int a;
    int b;
    printf("Enter value of a:");
    scanf("%d",&a);
     printf("Enter value of b:");
    scanf("%d",&b);
    maximum(a,b);

    return 0;
}
int maximum(int a,int b){
    if(a>b){
        printf("%d",a);
    }else{
        printf("%d",b);
    }
    
    
}