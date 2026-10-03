#include<stdio.h>
void myfunction(char name[],int age){
printf("Hello %s.Your age is %d.\n",name,age);
}
int main(){
myfunction("Rahat",18);
myfunction("Fahim",19);
myfunction("Adil",20);
return 0;
}
