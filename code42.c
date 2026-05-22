#include<stdio.h>
int add(int a,int b);
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    int y;
    printf("Enter the value of y:");
    scanf("%d",&y);
    add(x,y);
    return 0;
}
int add(int a,int b){
    int sum;
   sum=a+b;
   printf("%d",sum);
   return sum;   
}