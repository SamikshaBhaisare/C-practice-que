#include<stdio.h>
typedef struct stuednt{
    char name[50];
    int rollnum;

}std;
int main(){
    std s1;
    printf("Enter name:");
    scanf("%s",s1.name);
    printf("Enter roll number:");
    scanf("%d",&s1.rollnum);
    printf("%s %d",s1.name,s1.rollnum);
    return 0;
}