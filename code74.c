#include<stdio.h>
void counter(){
    static int x=0;
    x++;
    printf("%d\n",x);
}
int main(){
     counter();
        counter();
           counter();
              counter();
                 counter();
    
    return 0;
}