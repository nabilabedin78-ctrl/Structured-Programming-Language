#include<stdio.h>
int main(){
int myNumbers[5]={24,65,62,23,56};
int *p=myNumbers;
int i;
for(i=0;i<5;i++){
printf("%d\n",*p);
p++;
}
return 0;
}
