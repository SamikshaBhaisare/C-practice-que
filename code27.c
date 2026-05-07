#include<Stdio.h>
void update(int **p){
     **p=100;
}
int main(){
    int x=10;
    int *ptr=&x;
    int **dptr=&ptr;
    printf("value of x:%d\n",x);
    update(dptr);
    printf("after value of x:%d",x);
    return 0;

}