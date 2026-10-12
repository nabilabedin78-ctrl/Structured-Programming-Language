#include<stdio.h>
int sum(int a, int b){
return a+b;
}
int main(){
int(*ptr)(int, int)=sum;
int result=ptr(51,50);
printf("sum is %d",result);
return 0;
}
