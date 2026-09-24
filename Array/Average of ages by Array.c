#include<stdio.h>
int main(){
int ages[]={23,78,34,54,65,76,87,87,43,54,65,75,86,86,44,34,56,76,98,56,34,23,45,65,76,87,12,13,14,15,16,17,23,24,25,26,45,47,67,89};
int length=sizeof(ages)/sizeof(ages[0]);
int i,sum=0;
for(i=0;i<length;i++){
sum+=ages[i];
}
float avg=(float)sum/length;
printf("%.2f",avg);
return 0;
}

