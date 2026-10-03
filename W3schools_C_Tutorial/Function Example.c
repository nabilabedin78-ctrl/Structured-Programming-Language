#include<stdio.h>
void calculatesum(int x,int y){
int sum=x+y;
printf("The sum of %d+%d is %d\n",x,y,sum);
}
int main(){
calculatesum(5,20);
calculatesum(2578,894);
calculatesum(34975,54762);
return 0;
}
