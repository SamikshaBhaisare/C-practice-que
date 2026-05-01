#include<stdio.h>
struct D{
    char c;
    int a;
    short t;
    double h;
    float f;
};
int main(){

printf("%zu", sizeof(struct D));
return 0;
}

