#include<stdio.h>
void add(int a, int b){printf("%d\n",a+b);}
void substract(int a, int b){printf("%d\n",a-b);}
void multiply(int a, int b){printf("%d\n",a*b);}
int main(){
int choice,x=13,y=6;
void (*operations[3])(int,int)={add,substract,multiply};
printf("x=%d, y=%d\n",x,y);
printf("choose an operation: \n");
printf("0: Add\n1: Substract\n2: Multiply\n");
scanf("%d",&choice);
if(choice>=0 && choice<3){
operations[choice](x,y);
}
else{printf("invalid choice!");}
return 0;
}
