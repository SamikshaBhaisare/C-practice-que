#include<stdio.h>
void counter(){
    static int x=0;
    printf("%d\n",x);
      x++;
    
}
int main(){
     for(int i=0;i<=5;i++){
    counter();
     }
    return 0;
}