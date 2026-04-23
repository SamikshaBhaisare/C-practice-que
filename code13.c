#include<stdio.h>
typedef struct{
    int x;
    int y;
}point;
int main(){
    point p;
    p.x=10;
    p.y=20;
    printf("point :%d %d",p.x,p.y);
    return 0;
}