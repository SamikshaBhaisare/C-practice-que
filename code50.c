#include<stdio.h>
enum traffic  {
    RED,
    YELLOW,
    GREEN,
};
int main(){
enum traffic t;
t=GREEN;
printf("%d",t);
return 0;
}