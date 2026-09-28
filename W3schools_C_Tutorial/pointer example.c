#include<stdio.h>
int main(){
int myage=40;
int *ptr= &myage;
//print the value of myage variable
printf("%d\n",myage);
//print the address of myage variable
printf("%p\n",&myage);
//print the address of myage variable by pointer
printf("%p\n", ptr);
//print the value of a variable which is pointed by pointer
printf("%d\n", *ptr);
return 0;
}

