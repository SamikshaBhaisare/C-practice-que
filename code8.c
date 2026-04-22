#include<stdio.h>
struct student{
    char name[100];
    int age;
    int marks;

};
int main(){
    struct student s1;
    struct student *ptr;
    ptr=&s1;
    printf("enter name:");
    scanf("%s",ptr->name);
    printf("enter age:");
    scanf("%d",ptr->age);
    printf("enter marks:");
    scanf("%f",ptr->marks);
    printf("Student detail is:\n");
     printf(" name:%s\n",ptr->name);
      printf(" age:%d\n",ptr->age);
       printf("age:%f\n",ptr->marks);
       return 0;
}