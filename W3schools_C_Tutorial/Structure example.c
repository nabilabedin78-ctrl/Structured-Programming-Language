#include<stdio.h>
struct mystructure{
int value;
char myLetter;
};
int main(){
struct mystructure S1;
S1.value=14;
S1.myLetter='C';
printf("Value is %d\n",S1.value);
printf("MyLetter :%c\n",S1.myLetter);
return 0;
}
