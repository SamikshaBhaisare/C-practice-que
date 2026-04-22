#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int age ;
    float marks;
};
int main(){
   struct student s[3];
   for(int i=0;i<3;i++){
    printf("enter student detail:%d\n",i+1);
    printf("name:");
    scanf("%s",s[i].name);
     printf("age:");
    scanf("%d",&s[i].age);
     printf("marks:");
    scanf("%f",&s[i].marks);



   }
    for(int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("name: %d\n", s[i].name);
        printf("age: %s\n", s[i].age);
        printf("Marks: %f\n", s[i].marks);
    }
    return 0;
}