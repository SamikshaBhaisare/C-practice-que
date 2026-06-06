#include<stdio.h>
int main(){
    int x=10;
    const int *ptr=&x;
    printf("value:%d",*ptr);
    return 0;
}