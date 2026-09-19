#include<stdio.h>
int main(){
int n;
printf("Please Enter your Number: ");
scanf("%d", &n);
if(n>0){
printf("Your Number %d is Positive\n");
}
else if(n==0){
printf("Your Number %d is Zero\n");
}
else{
printf("Your Number %d is Negative\n");
}
return 0;
}
