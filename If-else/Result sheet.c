#include <stdio.h>
int main(){
int n;
printf("Please Enter Your Number: ");
scanf("%d", &n);
if(n>=80){
printf("You got A+");
}
else if(n>=70){
printf("You got A");
}
else if(n>=60){
printf("You got A-");
}
else if(n>=50){
printf("You got B");
}
else if(n>=40){
printf("You got C");
}
else if(n>=33){
printf("You got D");
}
else{
printf("You failed");
}
return 0;
}
