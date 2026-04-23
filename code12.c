#include<stdio.h>
struct student{
    char grade;
    int marks;
};
int main(){
    printf("size=%lu",sizeof(struct student));
    return 0;
}