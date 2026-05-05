#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int *start=arr;
    int *end=arr+5;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    int *p=arr;
    while(p<=arr+5){
        printf("%d",*p);
        p++;
    }
    return 0;
}