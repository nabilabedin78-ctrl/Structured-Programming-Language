#include<stdio.h>
int main(){
int numbers[4]={3,6,9,4};
printf("%d\n", *numbers);
printf("\n");
printf("\n");
printf("Change the element of Array by pointer\n");
*numbers=2;
*(numbers+1)=8;
*(numbers+2)=0;
*(numbers+3)=11;
printf("%d\n%d\n%d\n%d\n",*numbers,*(numbers+1),*(numbers+2),*(numbers+3));
return 0;
}

