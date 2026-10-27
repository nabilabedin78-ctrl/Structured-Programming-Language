#include<stdio.h>
void myfunction();
void otherFunction();
int main(){
myfunction();
}
void myfunction(){
printf("function worked\n");
otherFunction();
}
void otherFunction(){
printf("Function called other function");
}
