#include<stdio.h>
int main(){
int numbers[]={23,43,54,65,76};
numbers[0]=10;
numbers[4]=50;
printf("%d\n%d", numbers[0],numbers[4]);
return 0;
}
