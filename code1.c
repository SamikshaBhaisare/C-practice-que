#include<stdio.h>
void England(){
    printf("You are in England\n");
}
void China(){
    printf("You are in China\n");
    England();
}
void Australia(){
    printf("You are in Australia\n");
    China();
}
void India(){
    printf("You are in India\n");
    Australia();
}
int main(){
    India();
    return 0;
}