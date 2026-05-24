#include<stdio.h>
int main(){
    FILE *fp;
    char name[50];
    int roll;
    fp=fopen("student.txt","w");
    printf("enter name:");
    scanf("%s",name);
    printf("enetr roll number:");
    scanf("%d",&roll);
    fprintf(fp,"Name:%s\n",name);
    fprintf(fp,"Roll Number:%d\n",roll);
    fclose(fp);
    return 0;

}