#include<stdio.h>
int main(){
int number;
char myChar;
printf("Please enter a number and a character: \n");
scanf("%d %c", &number, &myChar);
printf("Your number is %d\nYour character is %c", number,myChar);
return 0;
}
