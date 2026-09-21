#include<stdio.h>
int main(){
int year;
scanf("%d", &year);
int rem400=year%400;
int rem100=year%100;
int rem4=year%4;
if(rem400==0){
printf("%d is Leap year",year);
}
else if(rem100!=0 && rem4==0){
printf("%d is Leap year",year);
}
else{
printf("%d is not Leap year",year);
}
return 0;
}
