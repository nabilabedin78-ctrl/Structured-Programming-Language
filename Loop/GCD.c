#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
while(1){
int rem=b%a;
if(rem==0) break;
b=a;
a=rem;
}
printf("GCD is =%d",a);
return 0;
}
