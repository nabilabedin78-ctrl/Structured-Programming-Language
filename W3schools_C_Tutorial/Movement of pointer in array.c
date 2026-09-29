#include<stdio.h>
int main(){
int numbers[3]={4,6,8};
int *p=numbers;
printf("%d\n",*p);
p++;
printf("%d\n",*p);
p--;
printf("%d\n",*p);
p+=2;
printf("%d\n",*p);
return 0;
}
