#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers :");
scanf("%d %d", &a, &b);
int X=a;
int Y=b;
while(1){
int rem=b%a;
if(rem==0){
break;
}
b=a;
a=rem;
}
int lcm=(X*Y)/a;
printf("LCM is %d",lcm);
}
