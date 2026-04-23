#include<stdio.h>
struct student{
    char name[50];
    int marks;

};
int main(){
    struct student s1,s2;
    printf("Enter the name of student1:");
    scanf("%s",s1.name);
     printf("Enter the marks of student1:");
    scanf("%d",&s1.marks);
    printf("Enter the name of student2:");
    scanf("%s",s2.name);
     printf("Enter the marks of student2:");
    scanf("%d",&s2.marks);
    if(s1.marks>s2.marks){
        printf("%s Highest score  %d \n",s1.name,s1.marks);
    }
    else{
         printf("%s Highest score %d \n",s2.name,s2.marks);
    }
    return 0;

}