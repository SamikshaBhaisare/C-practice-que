#include<stdio.h>
#define PI 3.14
int main(){
    int r;
    printf("enter the value of r:");
    scanf("%d",&r);
    float area;
    area=PI*r*r;
    printf("Area of circlr:%f",area);
    return 0;
}