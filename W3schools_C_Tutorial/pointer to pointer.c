#include<stdio.h>
int main(){
int age=10;
int *p=&age;
int **ptrp=&p;
printf("age is %d\n",age);
printf("age is %d\n", *p);
printf("age is %d\n",**ptrp);
printf("\n\n");
printf("Change values through a pointer to pointer\n");
**ptrp=20;
printf("age is %d",age);
return 0;
}
