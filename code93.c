#include<stdio.h>
enum week{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};
int main(){
    enum week day;
    day=FRI;
    printf("FRI=%d\n",day);
    return 0;
}