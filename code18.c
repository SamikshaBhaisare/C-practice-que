#include<stdio.h>
int main(){
    int age=23;
    int *ptr=&age;
    int _age=*ptr;
    printf("%p\n",&age);
    printf("%d",_age);
    return 0;
}