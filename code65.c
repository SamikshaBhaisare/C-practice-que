#include<stdio.h>
int main(){
    int x=10;
    int *const ptr=&x;
    *ptr=20;
    printf("value:%d",*ptr);
    return 0;
}