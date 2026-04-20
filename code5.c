#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;

    }
    printf("count is:%d\n",count);
    return 0;
}