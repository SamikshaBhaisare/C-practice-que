#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a%b;
}
int main(){
    int a,b,ch;
    int (*ptr)(int ,int);
    printf("Enter value of a:");
    scanf("%d",&a);
     printf("Enter value of b:");
    scanf("%d",&b);
    printf("enter value of ch:");
    scanf("%d",&ch);
    if(ch==1){
      ptr=add;  
    }else if(ch==2){
        ptr=sub;  
    }else if(ch==3){
         ptr=mul;
    }else if(ch==4){
     ptr=div;   
    }else if(ch==5){
        ptr=mod;
    }else{
        printf("invalid");
        return 0;
    }
    printf("%d",ptr(a,b));
    return 0;
}