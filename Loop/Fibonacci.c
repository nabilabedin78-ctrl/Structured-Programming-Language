#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d", &n);
int a=0;
int b=1;
printf("%d %d", a,b);
for(int i=1;i<=(n-2);i++){
int X=a+b;
printf("%d",X);
a=b;
b=X;
}
}

