#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int *p=arr;
    int sum=0;
    while(p<arr+5){
        sum=sum+*p;
        p++;
    }
    printf("sum is:%d",sum);
    return 0;
}