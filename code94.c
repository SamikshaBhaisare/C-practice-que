#include<stdio.h>
enum Trafficlight{
    RED,
    YELLOW,
    GREEN
};
int main(){
    enum Trafficlight colour;
    int choice;
    printf("enter choice:");
    scanf("%d",&choice);
    colour=choice;
    if(colour==RED){
        printf(" stop");
    }else if(colour==YELLOW){
        printf("wait");
    }else if(colour==GREEN){
        printf("go");
    }
    return 0;
}