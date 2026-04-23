#include<stdio.h>
struct student{
    char name[50];
    int marks;
};
int main(){
    struct student s[5];
    int maxIndex=0;
    for(int i=0;i<5;i++){
        printf("enter the name of student %d:",i+1);
        scanf("%s",s[i].name);
        printf("enter the marks of student:");
        scanf("%d",&s[i].marks);
    }
        for(int i=0;i<5;i++){
        if(s[i].marks>s[maxIndex].marks){
            maxIndex=i;
        }
    }
        printf("highest score is:%s",s[maxIndex].name);
         printf("marks is:%d",s[maxIndex].marks);
         return 0;



    }
