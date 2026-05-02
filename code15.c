#include<stdio.h>
struct address{
    int plotno;
    int blockno;
    char city[100];
    char state[100];
};
void personadress(struct address add);
int main(){
    struct address add[5];
    printf("Enter address of person 1:");
    scanf("%d",&add[0].plotno);
     scanf("%d",&add[0].blockno);
      scanf("%s",add[0].city);
       scanf("%s",add[0].state);

        printf("Enter address of person 2:");
    scanf("%d",&add[1].plotno);
     scanf("%d",&add[1].blockno);
      scanf("%s",add[1].city);
       scanf("%s",add[1].state);

        printf("Enter address of person 3:");
    scanf("%d",&add[2].plotno);
     scanf("%d",&add[2].blockno);
      scanf("%s",add[2].city);
       scanf("%s",add[2].state);

        printf("Enter address of person 4:");
    scanf("%d",&add[3].plotno);
     scanf("%d",&add[3].blockno);
      scanf("%s",add[3].city);
       scanf("%s",add[3].state);

        printf("Enter address of person 5:");
    scanf("%d",&add[4].plotno);
     scanf("%d",&add[4].blockno);
      scanf("%s",add[4].city);
       scanf("%s",add[4].state);
personadress(add[0]);
personadress(add[1]);
personadress(add[2]);
personadress(add[3]);
personadress(add[4]);
return 0;

}
void personadress(struct address add){
    printf("Address is:%d %d %s %s\n",add.plotno,add.blockno,add.city,add.state);
}