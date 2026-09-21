#include<stdio.h>
int main(){
int result=fact(8);
printf("Answer is %d", result);
}
int fact(int n){
if(n==1)
return 1;
else return (n*(fact(n-1)));
}

