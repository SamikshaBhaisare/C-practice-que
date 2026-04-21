#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int age ;
    float marks;
};
int main(){
    struct student s1;
    strcpy(s1.name,"Akanksha");
    s1.age=22;
    s1.marks=85.5;
    printf("Name is:%s\n",s1.name);
    printf("Age is:%d\n",s1.age);
    printf("Marks is:%f\n",s1.marks);
    return 0;
}