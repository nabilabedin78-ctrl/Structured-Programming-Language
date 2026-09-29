#include<stdio.h>
int main(){
int num[5]={3,6,7,8,4};
int *start=&num[1];
int *end=&num[4];
printf("%ld", end-start);
return 0;
}
